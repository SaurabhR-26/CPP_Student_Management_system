#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <unistd.h>
#include <conio.h>
// #include "coordinate.h"
#include "student_registration.h"

using namespace std;

int user_counter = 0;
const string admin_username = "S@ur@bh";
const string admin_password = "R@jop@dhye";

int login();
void registration();
int forget();
int welcome_page();
int failure_page();
void admin_login();

int welcome_page()
{
    string t;
    time_t now = time(NULL);
    t = ctime(&now);
    system("cls");
    int choice;
    cout << "\t\t\t\t _______________________________________" << endl;
    cout << "\t\t\t\t|            -: Welcome :-              |" << endl;
    cout << "\t\t\t\t|_______________________________________|" << endl;
    cout << "\t\t\t\t\tTime :" << t << endl;
    cout << "\t\t\t\t 1.LOGIN" << endl;
    cout << "\t\t\t\t 2.REGISTRATION" << endl;
    cout << "\t\t\t\t 3.FORGET PASSWORD" << endl;
    cout << "\t\t\t\t 4.ADMIN LOGIN" << endl;
    cout << "\t\t\t\t 5.EXIT" << endl;
    cout << endl
         << endl;
    cout << "\t\t\t\t\t\t YOUR CHOICE :";
    cin >> choice;
    getchar();
    return choice;
}

int failure_page()
{
    system("cls");
    int ch;
    cout << "\t\t\t\t!PLEASE ENTER VALID OPTION!" << endl
         << endl;
    cout << "\t\t\t\t\t\t1.To Home Page" << endl;
    cout << "\t\t\t\t\t\t2.To Exit" << endl;
    cout << "\t\t\t\t\t\t\t YOUR CHOICE :";
    cin >> ch;
    return ch;
}

int login()
{
    system("cls");
reenter:
    int flag = 0;
    int time = 6;
    int choi;
    string username, ur, pw;
    char password[25];
    char ch;
    cout << "\t\t\t\t\t ___________________" << endl;
    cout << "\t\t\t\t\t|    USER LOGIN     |" << endl;
    cout << "\t\t\t\t\t|___________________|" << endl
         << endl;
    // if (user_counter==0)
    // {
    //     cout<<"\t\t\t\tPLEASE REGISTER FIRST!"<<endl<<endl;
    //     return 0;

    // }
    cout << "\t\t\t\tUSERNAME : ";
    cin >> username;
    cout << endl;
    cout << "\t\t\t\tPASSWORD : ";
    // cin >> password;

    // input of password is taken as private
    int i = 0;
    while (1)
    {
        ch = getche();
        if (ch == 13)
            break;
        password[i] = ch;
        cout << "\b*";
        i++;
    }
    password[i] = '\0';
    cout << endl;
    ifstream examine;
    examine.open("test_file_1.txt");
    while (examine.eof() == 0)
    {
        examine >> ur;
        examine >> pw;
        if (ur == username && password == pw)
            flag = 1;
    }
    examine.close();
    if (flag == 1)
    {
        cout << "\t\tLOADING :";
        while (time--)
        {
            sleep(1);
            cout << '.';
        }
        system("cls");
        cout << "\t\t\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY !" << endl;
        sleep(5);
        return 0;
    }
    else
    {
        system("cls");
        cout << "\t\t\t\t\tUSERNAME OR PASSWORD IS WRONG !!!!" << endl
             << endl;
        cout << "\t\t\t1.Re-enter username and password." << endl;
        cout << "\t\t\t2.New Registration." << endl;
        cout << "\t\t\t\t\t\t\tYOUR CHOICE :";
        cin >> choi;
        if (choi == 1)
        {
            system("cls");
            goto reenter;
        }
        else
        {
            return 0;
        }
    }
    getchar();
    return 0;
}

void registration()
{
    int x, y;
    // printing the required format
    {
        int x, y;
        x = 35;
        y = 7;
        while (x < 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }

        x = 35;
        y = 10;
        while (x <= 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }

        gotoxy(35, 8);
        cout << "|";
        gotoxy(35, 9);
        cout << "|";
        gotoxy(35, 10);
        cout << "|";
        gotoxy(75, 8);
        cout << "|";
        gotoxy(75, 9);
        cout << "|";
        gotoxy(75, 10);
        cout << "|";

        // printing the required info
        gotoxy(48, 9);
        cout << "REGISTRATION";

        gotoxy(35, 14);
        cout << "USERNAME :";
        gotoxy(35, 18);
        cout << "PASSWORD :";

        gotoxy(50, 14);
        cout << "|";
        gotoxy(75, 14);
        cout << " |";
        gotoxy(75, 15);
        cout << " |";
        gotoxy(50, 15);
        cout << "|";

        gotoxy(50, 18);
        cout << "|";
        gotoxy(75, 18);
        cout << " |";
        gotoxy(75, 19);
        cout << " |";
        gotoxy(50, 19);
        cout << "|";

        x = 50;
        y = 13;
        while (x < 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }

        x = 50;
        y = 15;
        while (x < 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }

        x = 50;
        y = 17;
        while (x < 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }

        x = 50;
        y = 19;
        while (x <= 75)
        {
            cout << "_";
            x++;
            gotoxy(x, y);
        }
    }

    // taking input from the user
    int pass_cnt = 0;
    string user;
    char ch;
    char pass[25];

    gotoxy(52, 14);
    cin >> user;
step:
    gotoxy(52, 18);
    int i = 0, flag = 0;
    pass_cnt = 0;
    while (1)
    {
        ch = getche();
        if (ch == 13)
        {
            break;
        }
        if (ch == 8)
        {
            cout << "\b ";
        }
        pass[i] = ch;
        printf("\b*");
        if (ch == '~' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
            flag = 1;
        i++;
        pass_cnt++;
    }
    pass[i] = '\0';

    if (pass_cnt < 8)
    {
        x = 35;
        y = 21;
        gotoxy(x, y);
        while (x <= 88)
        {
            cout << " ";
            gotoxy(x, y);
            x++;
        }
        x = 36;
        y = 21;
        gotoxy(x, y);
        while (x <= 88)
        {
            cout << " ";
            gotoxy(x, y);
            x++;
        }
        gotoxy(35, 21);
        cout << "Password length is not sufficient!" << endl;
        x = 52;
        y = 18;
        gotoxy(x, y);
        while (x <= 68)
        {
            cout << " ";
            gotoxy(x, y);
            x++;
        }
        sleep(2);
        goto step;
    }
    else if (flag == 0)
    {
        x = 35;
        y = 21;
        gotoxy(x, y);
        while (x <= 88)
        {
            cout << " ";
            gotoxy(x, y);
            x++;
        }
        gotoxy(35, 21);
        cout << "No special Character detected !";
        gotoxy(35, 22);
        cout << "Password is not strong.....please re-enter";

        x = 52;
        y = 18;
        gotoxy(x, y);
        while (x <= 68)
        {
            cout << " ";
            gotoxy(x, y);
            x++;
        }
        sleep(2);
        goto step;
    }
    else
    {
        system("cls");
        user_counter++;
        ofstream regs;
        regs.open("test_file_1.txt", ios_base::app);
        if (user_counter)
        {
            regs << endl
                 << user << endl;
            regs << pass;
        }
        else
        {
            regs << user << endl;
            regs << pass << endl;
        }
    }

    input_personal_info();
    contact();
    parentDetails();
    hsc_ssc_details();
    other_details();
    isCorrect();
    system("cls");
    system("color 2");
    gotoxy(40, 15);
    cout << "--: YOUR REGISTRATION IS SUCCESSFULLY COMPLETED :--" << endl;
    gotoxy(45, 18);
    cout << "(: THANK YOU FOR REGISTERING :)" << endl;
    sleep(4);
    system("color F");
    getchar();
    return;
}

int forget()
{
    system("cls");
    string u, pass, uname;
    int flag = 0, time = 5; // flag 0 , username not found and flag 1 username found
    cout << "\t\t\t\t\tRECOVER YOUR ACCOUNT USING USERNAME" << endl;
    cout << "\t\t\t\t\t____________________________________" << endl
         << endl;

    cout << "\t\t\t\tEnter Username:";
    cin >> u;
    cout << endl;
    ifstream forget;
    forget.open("test_file_1.txt");
    while (forget.eof() == 0)
    {
        forget >> uname;
        forget >> pass;
        if (uname == u)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\t\t\t\t\tUSERNAME FOUND SUCCESSFULLY" << endl
             << endl;
        cout << "\t\t\t\t\tYOUR PASSWORD :" << pass << endl
             << endl;
        cout << "\t\t\t\tRedirecting to the Home Page in few seconds";
        while (time--)
        {
            sleep(1);
            cout << '.';
        }
        system("cls");
        return 0;
    }
    else
    {
        cout << "\t\t\t\t\tUSERNAME DOESN'T MATCHES RECORD !!!" << endl
             << endl;
        cout << "\t\t\t\t\tPlease Register to create new account.";
        sleep(5);
        getchar();
        return 0;
    }
}

void admin_login()
{
    string u, p;
    system("cls");
    cout << "\t\t\t\t\t _____________________________" << endl;
    cout << "\t\t\t\t\t|         ADMIN LOGIN         |" << endl;
    cout << "\t\t\t\t\t|_____________________________|" << endl
         << endl;
    cout << "\t\t\tADMIN USERNAME :";
    cin >> u;
    cout << "\t\t\tADMIN PASSWORD :";
    cin >> p;
    if (u == admin_username && p == admin_password)
    {
        system("cls");
        user_counter = 0;
        ifstream ad;
        ad.open("test_file_1.txt");
        while (ad.eof() == 0)
        {
            ad >> u;
            ad >> p;
            user_counter++;
        }
        cout << "\t\t\t\tDISPLAYING ADMIN DATA" << endl
             << endl;
        cout << "\t\t\t\t\tUSER COUNT:" << user_counter << endl;
        cout << endl
             << endl
             << "\t\t\tPress ENTER KEY :";
        getch();
        return;
    }
    else
    {
        cout << endl
             << endl
             << "\t\t\t\t\tWRONG USERNAME OR PASSWORD"
             << endl
             << "\t\t\tPlease try again !!!";
        sleep(3);
        return;
    }
}

int main()
{
    int choice, val;
    system("cls");
    while (1)
    {
        choice = welcome_page();
        switch (choice)
        {
        case 1:
            login();
            break;
        case 2:
            system("cls");
            registration();
            break;
        case 3:
            system("cls");
            forget();
            break;
        case 4:
            admin_login();
            break;
        case 5:
            goto exit;
            break;
        default:
            val = failure_page();
            if (val == 2)
                goto exit;
        }
    }
exit:
    cout << endl
         << endl
         << "\t\t\t\t-: THANK YOU FOR USING SYSTEM :-";
    return 0;
}

/*
1.teacher login
2.student login
3.student class
4.teacher class
5.timetable
6.cgpa
*/