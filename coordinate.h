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

void printBorder()
{
    int x, y;
    x = 2;
    y = 6;
    gotoxy(x, y);
    while (x <= 116)
    {
        cout << "_ ";
        x += 2;
    }
    x = 2;
    y = 23;
    gotoxy(x, y);
    while (x <= 116)
    {
        cout << "_ ";
        x += 2;
    }
    x = 2;
    y = 7;
    gotoxy(x, y);
    while (y <= 23)
    {
        cout << "|";
        y++;
        gotoxy(x, y);
    }
    x = 116;
    y = 7;
    gotoxy(x, y);
    while (y <= 23)
    {
        cout << "|";
        y++;
        gotoxy(x, y);
    }
}