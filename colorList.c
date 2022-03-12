#include <stdio.h>
#include <windows.h>

int main(){
    int i;
    for (i = 1; i < 257; ++i) {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
       printf("This color is: %d\n", i);
    }
return 0;
}
