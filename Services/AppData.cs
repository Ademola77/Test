using System.Diagnostics;
using Test.Data;

namespace Test.Services
{
    public class AppData
    {
        public string GithubRoot { get; set; } ="Test";
        public bool IsIIS { get; set; } = false;
        public string Color { get; set; } = "blue";
        public int MyProperty { get; set; }
        public List<string> TaskList { get; set; } = new();
        public List<ToDoItem> ToDoTaskList { get; set; } = new();

        public  void AddToList()
        {
           
            if (TaskList != null && TaskList.Any())
            {
                TaskList.Add( (TaskList.Count() ).ToString() +" - "+ DateTime.Now.ToLocalTime().ToString());
            }
            else
            {
                TaskList.Add( "0" + " - "  + DateTime.Now.ToLocalTime().ToString());
            }

        }

        public void AddTaskToList()
        {

            if (TaskList != null && TaskList.Any())
            {
                ToDoTaskList.Add(new ToDoItem { Id = TaskList.Count(), Namex = DateTime.Now.ToLocalTime().ToString() });
            }
            else
            {
                ToDoTaskList.Add(new ToDoItem { Id = 0, Namex = DateTime.Now.ToLocalTime().ToString() });
            }

        }



    }
}
