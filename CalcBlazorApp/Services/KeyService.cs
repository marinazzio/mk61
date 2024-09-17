using System.Net.Http.Json;
using CalcBlazorCore.Models;

namespace CalcBlazorApp.Services;

public class KeyService
{
    private readonly HttpClient _httpClient;
    private readonly IConfiguration _configuration;

    public KeyService(HttpClient httpClient, IConfiguration configuration)
    {
        _httpClient = httpClient;
        _configuration = configuration;
    }

    public async Task<KeyInfo> GetInfoAsync(string code)
    {
        var apiBaseUrl = _configuration["ApiBaseUrl"];
        var response =
            await _httpClient
                .GetFromJsonAsync<KeyInfo>(
                    $"{apiBaseUrl}api/KeyInfo/{code}"
                );

        if (response is null)
        {
            throw new HttpRequestException($"No key found for code '{code}'");
        }

        return response;
    }
}
