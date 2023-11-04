#include <Windows.h>
#include <stdio.h>

void LoadReflectiveDLL(char *dllPath) {
   // Load the DLL file
   HMODULE hModule = LoadLibraryA(dllPath);

   FARPROC ByfronIsInjected = GetProcAddress(hModule, "ByfronIsInjected");
   *(BOOL *)ByfronIsInjected = FALSE;
}

int main() {
   // Load the DLL file
   LoadReflectiveDLL("Byfron.dll");

   // Show a message that the bypass was successful.
   printf("Bypass Byfron anti-cheat successfully!\n");
   return 0;
}
