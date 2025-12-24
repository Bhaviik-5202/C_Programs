/* Shutdown Windows/Linux Shutdown Machine. [#include <stdlib.h> to be used for system
() function]*/


#include <stdlib.h>  
int main() {  
    system("shutdown /s /t 1"); // Shutdown in 1 second  
    return 0;  
}