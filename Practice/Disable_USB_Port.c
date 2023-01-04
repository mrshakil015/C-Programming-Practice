#include <stdio.h> 
#include <stdlib.h> 
int main() 
    { 
    system( "reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR \/v Start \/t REG_DWORD \/d 4 \/f" ); 
    return 0;
     }