#include <stdio.h>
#include <Windows.h>
#include <Psapi.h>

int main(void)
{
    // From Cheat Engine
    // Base address: "returnVars.exe"+000150B8
    // Offset: 0x34C

    int numberToWrite = 8888;
    int *memAddrToWrite = 0xfa80fff84c;

    // To get the pid we need to find the app window
    // Find class and windows name with Windowspy 
    HWND appWindow = FindWindowA("ConsoleWindowClass", "ReturnVars");

    if (appWindow == NULL)
    {
        printf("\nCannot find App!\n"); // wrong class or windows name
        Sleep(5000);
        exit(-1);
    }
    else
    {
        // Use the appwindow to find the process ID
        DWORD procID;
        GetWindowThreadProcessId(appWindow, &procID);
        printf("\nprocID:%i\n", procID);

        // We need permittion to read and write in the app virtual memory
        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
        
        if (procID = NULL)
        {
            printf("\nCannot obtain process ID!");
            Sleep(5000);
            exit(-1);
        }
        else
        {
            // Infinite loop for the case i want to change health to max in a game every 1 second

            // for (;;)
            //{
            BOOL result = FALSE; 
            result = WriteProcessMemory(handle, (LPVOID)memAddrToWrite, &numberToWrite, sizeof(numberToWrite), 0);
            if (result != 0) // WriteProcessMemory returns a 0(zero) if fails.
            {
                printf("\nJob done!\n");
                return 0;
            }
            else
            {
                printf("\nFail! Memory address is likelly wrong :(\n");
                return 1;
            }

            // Sleep(1000);
            //}
        }
    }
    return 0;
}
