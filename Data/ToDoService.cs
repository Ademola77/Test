using Microsoft.EntityFrameworkCore;
using SqliteWasmHelper;
using System.Diagnostics;
using System.IO;

namespace Test.Data
{
    public class ToDoService
    {
        private readonly ISqliteWasmDbContextFactory<ToDoContext> wasmDbContextFactory;

        public ToDoService(ISqliteWasmDbContextFactory<ToDoContext> wasmDbContextFactory)
        {
            this.wasmDbContextFactory = wasmDbContextFactory;
        }



        public async Task<IEnumerable<ToDoItem>> AddTaskToList(string currentName)
        {
           var ctx = await wasmDbContextFactory.CreateDbContextAsync();
            //if ( ctx.ToDoItems != null && ctx.ToDoItems.Any())
            //{
            //  ctx.ToDoItems.Add(new ToDoItem {  Task =$"Task added on {DateTime.Now.ToLocalTime().ToString()}" });
            //}

            //else
            //{
            //  ctx.ToDoItems.Add(new ToDoItem {  Task = $"First task added {DateTime.Now.ToLocalTime().ToString()}" });
            //}

            ctx.ToDoItems.Add(new ToDoItem {Namex=currentName });

           await ctx.SaveChangesAsync();
            return ctx.ToDoItems.ToList();
        }

        public async Task<List<ToDoItem>> FetchTaskToDoList()
        {
            var ctx = await wasmDbContextFactory.CreateDbContextAsync();

            return ctx.ToDoItems.ToList();
        }


        public async Task RemoveFromTaskToDoList(int itemToDelete)
        {
            var ctx = await wasmDbContextFactory.CreateDbContextAsync();
           var c = await ctx.ToDoItems.FindAsync( itemToDelete);
                         ctx.ToDoItems.Remove(c);
           await ctx.SaveChangesAsync();


        }


        public void GetCsvData()
        {
            string FilePath = "F:/adecv.csv";
           
            try
            {
                using (var sreader = new StreamReader(FilePath))
                {
                    string line;
                    while ((line = sreader.ReadLine()) != null)
                    {
                        Console.WriteLine(line);
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);

            }

            Console.ReadKey();
        }




    }
}
