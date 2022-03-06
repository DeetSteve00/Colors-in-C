#include <stdio.h>
#include <windows.h>

int color(int color, char text[1000]) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    printf(text);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main(){
    // Very simple function
    color(/*Color goes here*/, /*Text goes here*/);
    return 0;
}
