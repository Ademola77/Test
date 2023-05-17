using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Test;
using Test.Data;
using Test.Services;
using SqliteWasmHelper;
using Microsoft.EntityFrameworkCore;


var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");


builder.Services.AddSingleton<AppData>();

builder.Services.AddScoped<ToDoService>();
//builder.Services.AddSqliteWasmDbContextFactory<ToDoContext>(x=>x.UseSqlite("Data Source =adedb.sqlite3"));

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });



await builder.Build().RunAsync();
