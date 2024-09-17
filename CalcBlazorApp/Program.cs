using CalcBlazorApp;
using CalcBlazorApp.Services;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Configuration.AddJsonFile(
    "appsettings.json",
    optional: false,
    reloadOnChange: true
    );

builder.Services.AddScoped( sp =>
    new HttpClient { BaseAddress = new Uri(builder.Configuration["ApiBaseUrl"]) }
);

builder.Services.AddScoped<KeyService>();

await builder.Build().RunAsync();
