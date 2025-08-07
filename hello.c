#include <stdio.h>
#include <windows.h>

int main() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // Create a child process
    if (CreateProcess(NULL,   // No module name (use command line)
                      "child_process.exe", // Command line
                      NULL,   // Process handle not inheritable
                      NULL,   // Thread handle not inheritable
                      FALSE,  // Set handle inheritance to FALSE
                      0,      // No creation flags
                      NULL,   // Use parent's environment block
                      NULL,   // Use parent's starting directory 
                      &si,    // Pointer to STARTUPINFO structure
                      &pi)    // Pointer to PROCESS_INFORMATION structure
    ) {
        printf("Parent process\n");
        // Wait until child process exits.
        WaitForSingleObject(pi.hProcess, INFINITE);

        // Close process and thread handles. 
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
    } else {
        printf("CreateProcess failed (%d)\n", GetLastError());
    }

    return 0;
}
