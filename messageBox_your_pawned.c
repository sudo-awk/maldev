#include <windows.h>

int main(void) {
    
    MessageBoxW(
        NULL,
        L"Gotcha!! yOU'VE BEEN PAWNED",
        L"oooopsss!",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );
    return EXIT_SUCCESS;

}
