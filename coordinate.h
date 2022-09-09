#include <iostream>
#include <Windows.h>

using namespace std;
// 25 * 118
void gotoxy(int x, int y)
{
    COORD obj;
    obj.X = x;
    obj.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), obj);
}