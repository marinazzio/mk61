namespace CalcBlazorCore.Models;

public class KeyInfo
{
    public required string Code { get; set; }
    public bool IsFPressed { get; set; }
    public bool IsKPressed { get; set; }

    public string? PreparedFunction { get; set; }
}
