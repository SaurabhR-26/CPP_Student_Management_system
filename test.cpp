#include <iostream>
#include "coordinate.h"

using namespace std;
int main()
{
    system("cls");
    int x;
    gotoxy(5, 0);
    cout << "First Name: ";
    gotoxy(40, 28);
    cout << "Middle Name: ";
    gotoxy(110, 30);
    cout << "Last Name: ";
    gotoxy(24, 10);
    cin >> x;

    return 0;
}