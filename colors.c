#include <stdio.h>
#include <windows.h>
#include <string.h>

int color(int color, char text[1000]) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    printf(text);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
}
int main(){
    color(/*Color goes here*/, /*Text goes here*/);
    return 0;
}
