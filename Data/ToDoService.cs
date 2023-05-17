using LINQtoCSV;
using Microsoft.AspNetCore.Components;
using Microsoft.EntityFrameworkCore;
using SqliteWasmHelper;
using System;
using System.Diagnostics;
using System.IO;
using System.Net.Http.Json;
using static Test.Pages.FetchData;
using System.Text.Json;
using System.Xml.Linq;

namespace Test.Data
{
    public class ToDoService
    {

        private readonly ISqliteWasmDbContextFactory<ToDoContext> wasmDbContextFactory;
        private readonly HttpClient http;

        public ToDoService(ISqliteWasmDbContextFactory<ToDoContext> wasmDbContextFactory,HttpClient http)
        {
            this.wasmDbContextFactory = wasmDbContextFactory;
            this.http = http;
        }



        public async Task<IEnumerable<ToDoItem>> AddTaskToList(string currentName)
        {
           var ctx = await wasmDbContextFactory.CreateDbContextAsync();
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


        public async Task<List<Product>> GetJsonData()
        {
            var x = await http.GetFromJsonAsync<Product[]>("sample-data/ToDoItems.json");
          return x.ToList<Product>();
        }

        public List<Product> GetCsvData()
        {
            var csvFileDescription = new CsvFileDescription
            {
               FirstLineHasColumnNames = true,
               IgnoreUnknownColumns = true,
               SeparatorChar = ',',
               UseFieldIndexForReadingData = false
            };

            string rootpath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "wwwroot","//","adecv.csv");

            string path1 = Path.Combine(Directory.GetCurrentDirectory(),"wwwroot", "img", "Image1.png");
            string path2 = Path.Combine(Environment.CurrentDirectory,"wwwroot", "img", "Image1.png");

            string path1b = Path.Combine(Directory.GetCurrentDirectory(), "wwwroot", "adecv.csv");
            string path1c = Path.Combine(Directory.GetCurrentDirectory(), "adecv.csv");

            string path2b = Path.Combine(Environment.CurrentDirectory, "wwwroot", "adecv.csv");
            string path2c = Path.Combine(Environment.CurrentDirectory, "adecv.csv");




            //string path3 = Path.Combine(hostingEnvironment.ContentRootPath,
            //                                         "wwwroot", "img", "Image1.png");




            var cvsContext = new CsvContext();

            var products = cvsContext.Read<Product>(path1b);
            var products2 = cvsContext.Read<Product>(path1c);



            return products.ToList<Product>();

        }


    }
}
