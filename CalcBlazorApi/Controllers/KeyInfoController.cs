using Microsoft.AspNetCore.Mvc;
using CalcBlazorCore.Models;

namespace CalcBlazorApi.Controllers;

[ApiController]
[Route("api/[controller]")]
public class KeyInfoController : Controller
{
    [HttpGet("{keyNumber}")]
    public ActionResult<KeyInfo> GetKeyInfo(string keyNumber)
    {
        var keyInfo = new KeyInfo
        {
            Code = "53",
            IsFPressed = false,
            IsKPressed = false
        };

        return Ok(keyInfo);
    }
}
