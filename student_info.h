
// #include <unistd.h>
#include "mainheader.h"
Student obj;
void input_personal_info()
{
    int gender_opt;
    int x, y;

    /*printing the required border of command prompt*/
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
    x = 55;
    y = 7;
    while (y <= 23)
    {
        gotoxy(x, y);
        cout << ".";
        y++;
    }

    /*printing the required information on the screen*/
    gotoxy(47, 3);
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
    gotoxy(5, 19);
    cout << "Admission Year:";

    /*printing the branch information and their codes */
    x = 70;
    y = 9;
    gotoxy(x, y);
    cout << "--BRANCHES AND THEIR CODES--";
    x = 60;
    y = 11;
    gotoxy(x, y);
    cout << "1.Computer Science and Engineering";
    y++;
    gotoxy(x, y);
    cout << "2.Information Technology";
    y++;
    gotoxy(x, y);
    cout << "3.Electrical Engineering";
    y++;
    gotoxy(x, y);
    cout << "4.Electronics Engineering";
    y++;
    gotoxy(x, y);
    cout << "5.Electronics and Telecommunication Engineering";
    y++;
    gotoxy(x, y);
    cout << "6.Civil Engineering";
    y++;
    gotoxy(x, y);
    cout << "7.Mechanical Engineering";
    y++;
    gotoxy(x, y);
    cout << "8.Other Branch";

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
    gotoxy(20, 19);
    cin >> obj.admission_year;
}

// confirmation page
bool isCorrect()
{
    int x, y, opt, i;
step:
    system("cls");
    system("color 4");
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
    /*printing the confirmation page information*/

    gotoxy(43, 3);
    cout << "-:   CONFIRMATION PAGE   :-";
    gotoxy(35, 13);
    cout << "Do you want to change some information before proceeding further ?";
    gotoxy(35, 15);
    cout << "1.YES";
    gotoxy(35, 16);
    cout << "2.NO";

    gotoxy(40, 18);
    cout << "YOUR CHOICE :";

    /*taking input*/
    gotoxy(54, 18);
    cin >> opt;
    if (opt < 1 || opt > 2)
    {
        gotoxy(35, 21);
        cout << "Invalid Option Entered !!! "
             << " Please Re-enter";
        sleep(2);
        goto step;
    }
    else if (opt == 1)
        return TRUE;
    else
    {
        i = 4;
        gotoxy(60, 22);
        cout << "Loading";
        while (i != 0)
        {
            cout << ".";
            sleep(1);
            i--;
        }
        system("cls");
        system("color F");
        return FALSE;
    }
}

void contact()
{
    int x, y, cnt;
    char ch;
    char dummy_email[30];
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

    x = 3;
    y = 11;
    gotoxy(x, y);
    while (x <= 115)
    {
        cout << "-";
        x++;
    }

    /*printing the required information*/
    gotoxy(43, 3);
    cout << "-:   CONTACT DETAILS   :-";
    gotoxy(5, 8);
    cout << "Mobile Number :";
    gotoxy(50, 8);
    cout << "Email :";
    gotoxy(5, 13);
    cout << "Address Details :";

    gotoxy(5, 15);
    cout << "Address :";
    gotoxy(5, 18);
    cout << "City :";
    gotoxy(50, 18);
    cout << "Pincode :";
    gotoxy(5, 20);
    cout << "State:";
    gotoxy(50, 20);
    cout << "Nationality:";

    /*input details*/
    gotoxy(20, 8);
    cin >> obj.mobile_no;
    gotoxy(59, 8);
    cin >> obj.email;
    // int i = 0;
    // int flag = 0;
    // while (1)
    // {
    //     ch = getche();
    //     if (ch == 13)
    //     {
    //         break;
    //     }
    //     dummy_email[i] = ch;
    //     if (ch == '@')
    //         flag = 1;
    //     i++;
    // }
    // dummy_email[i] = '\0';
    gotoxy(14, 15);
    cin >> obj.address;
    gotoxy(13, 18);
    cin >> obj.city;
    gotoxy(60, 18);
    cin >> obj.pincode;

    gotoxy(13, 20);
    cin >> obj.state;
    gotoxy(63, 20);
    cin >> obj.nationality;
}
