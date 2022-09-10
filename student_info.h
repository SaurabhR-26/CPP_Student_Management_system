
#include "mainheader.h"
Student obj;
void input_personal_info()
{
    int gender_opt;
    /*printing the required information on the screen*/
    gotoxy(47, 5);
    cout << "-:PERSONAL DETAILS:-";
    gotoxy(5, 8);
    cout << "NAME:";
    gotoxy(5, 11);
    cout << "DOB :";
    gotoxy(30, 11);
    cout << "Gender:";
    gotoxy(40, 11);
    cout << "1.Male    :";
    gotoxy(40, 12);
    cout << "2.Female";
    gotoxy(40, 13);
    cout << "3.Trans";
    gotoxy(5, 15);
    cout << "Year Of Study:";
    gotoxy(5, 17);
    cout << "Select Branch:";

    /*start of input*/
    gotoxy(11, 8);
    cin >> obj.name;
    gotoxy(11, 11);
    cin >> obj.bday_date >> obj.bday_mon >> obj.bday_year;
    gotoxy(52, 11);
    cin >> gender_opt;
    gotoxy(20, 15);
    cin >> obj.year_study;
    gotoxy(20, 17);
    cin >> obj.branch;
}
