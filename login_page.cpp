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
#define l l lon long;

int user_counter = 0;
const string admin_username = "S@ur@bh";
const string admin_password = "R@jop@dhye";

int login();
Student registration(Student);
int forget();
int welcome_page();
int failure_page();
void admin_login();
void printBorder();
void show();
void modify();
int choice();
void display(Student);
Student para;
class timetable
{
public:
    struct day
    {
        string sub1;
    };
    int i, j;
    struct day time[35];
    void fun()
    {

        system("cls");
        gotoxy(2, 3);
        cout << " ___" << endl;
        for (i = 3; i < 24; i += 3)
        {
            gotoxy(2, i + 1);
            cout << "|";
            gotoxy(2, i + 2);
            cout << "|";
            gotoxy(2, i + 3);
            cout << "|___";
        }
        gotoxy(3, 4);
        cout << "10.15-";
        gotoxy(3, 5);
        cout << "11.15";
        gotoxy(3, 7);
        cout << "11.15-";
        gotoxy(3, 8);
        cout << "12.15";
        gotoxy(3, 10);
        cout << "12.15-";
        gotoxy(3, 11);
        cout << "1.15";
        gotoxy(3, 13);
        cout << "1.15-";
        gotoxy(3, 14);
        cout << "2.15";
        gotoxy(3, 16);
        cout << "2.15-";
        gotoxy(3, 17);
        cout << "3.15";
        gotoxy(3, 19);
        cout << "3.30-";
        gotoxy(3, 20);
        cout << "4.30";
        gotoxy(3, 22);
        cout << "4.30-";
        gotoxy(3, 23);
        cout << "5.30";
        gotoxy(6, 1);
        cout << "    _____________________________________________________________________________________________" << endl;
        gotoxy(6, 2);
        cout << "    |    MONDAY     |    TUESDAY      |     WEDNESDAY    |      THURSDAY       |     FRIDAY     |" << endl;
        gotoxy(6, 3);
        cout << "    |_______________|_________________|__________________|_____________________|________________|" << endl;
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(11, i);
            cout << "_______________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(27, i);
            cout << "_________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(45, i);
            cout << "__________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(64, i);
            cout << "_____________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(86, i);
            cout << "________________" << endl;
            ;
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(10, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(26, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(44, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(63, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(85, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(102, i);
            cout << "|";
        }

        for (i = 5, j = 0; i < 25, j < 7; j++, i += 3)
        {
            gotoxy(13, i);

            cin >> time[j].sub1;
        }
        for (i = 5, j = 7; i < 25, j < 14; j++, i += 3)
        {
            gotoxy(29, i);

            cin >> time[j].sub1;
        }
        for (i = 5, j = 14; i < 25, j < 21; j++, i += 3)
        {
            gotoxy(47, i);

            cin >> time[j].sub1;
        }
        for (i = 5, j = 21; i < 25, j < 28; j++, i += 3)
        {
            gotoxy(66, i);

            cin >> time[j].sub1;
        }
        for (i = 5, j = 28; i < 25, j < 35; j++, i += 3)
        {
            gotoxy(88, i);

            cin >> time[j].sub1;
        }
    }
    void display()
    {
        system("cls");
        gotoxy(2, 3);
        cout << " ___" << endl;
        for (i = 3; i < 24; i += 3)
        {
            gotoxy(2, i + 1);
            cout << "|";
            gotoxy(2, i + 2);
            cout << "|";
            gotoxy(2, i + 3);
            cout << "|___";
        }
        gotoxy(3, 4);
        cout << "10.15-";
        gotoxy(3, 5);
        cout << "11.15";
        gotoxy(3, 7);
        cout << "11.15-";
        gotoxy(3, 8);
        cout << "12.15";
        gotoxy(3, 10);
        cout << "12.15-";
        gotoxy(3, 11);
        cout << "1.15";
        gotoxy(3, 13);
        cout << "1.15-";
        gotoxy(3, 14);
        cout << "2.15";
        gotoxy(3, 16);
        cout << "2.15-";
        gotoxy(3, 17);
        cout << "3.15";
        gotoxy(3, 19);
        cout << "3.30-";
        gotoxy(3, 20);
        cout << "4.30";
        gotoxy(3, 22);
        cout << "4.30-";
        gotoxy(3, 23);
        cout << "5.30";
        gotoxy(6, 1);
        cout << "    _____________________________________________________________________________________________" << endl;
        gotoxy(6, 2);
        cout << "    |    MONDAY     |    TUESDAY      |     WEDNESDAY    |      THURSDAY       |     FRIDAY     |" << endl;
        gotoxy(6, 3);
        cout << "    |_______________|_________________|__________________|_____________________|________________|" << endl;
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(11, i);
            cout << "_______________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(27, i);
            cout << "_________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(45, i);
            cout << "__________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(64, i);
            cout << "_____________________" << endl;
            ;
        }
        for (i = 6; i < 25; i += 3)
        {
            gotoxy(86, i);
            cout << "________________" << endl;
            ;
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(10, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(26, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(44, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(63, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(85, i);
            cout << "|";
        }
        for (i = 4; i < 25; i++)
        {
            gotoxy(102, i);
            cout << "|";
        }

        for (i = 5, j = 0; i < 25, j < 7; j++, i += 3)
        {
            gotoxy(13, i);

            cout << time[j].sub1;
        }
        for (i = 5, j = 7; i < 25, j < 14; j++, i += 3)
        {
            gotoxy(29, i);

            cout << time[j].sub1;
        }
        for (i = 5, j = 14; i < 25, j < 21; j++, i += 3)
        {
            gotoxy(47, i);

            cout << time[j].sub1;
        }
        for (i = 5, j = 21; i < 25, j < 28; j++, i += 3)
        {
            gotoxy(66, i);

            cout << time[j].sub1;
        }
        for (i = 5, j = 28; i < 25, j < 35; j++, i += 3)
        {
            gotoxy(88, i);

            cout << time[j].sub1;
        }
    }
};

timetable fy, sy, ty, finy;

void message()
{
    int n;
    string tmp;
    system("cls");
    printBorder();
    gotoxy(5, 8);
    cout << "ENTER MESSAGE TO THE STUDENTS :";
    gotoxy(10, 10);
    cout << "Enter Number of Lines to Write :";
    cin >> n;
    gotoxy(10, 12);
    cout << "Message:";
    while (n--)
    {
        ofstream msg("teacher_message.txt", ios_base::app);
        _flushall();
        getline(cin, tmp);
        _flushall();
        msg << tmp << endl;
    }
    gotoxy(30, 20);
    cout << "----------:Message Written Successfully :--------";
    sleep(2);
    system("cls");
}

int welcome_page()
{
    int choice;
    _flushall();
    string t;
    time_t now = time(NULL);
    t = ctime(&now);
    system("cls");
    cout << "\t\t\t\t _______________________________________" << endl;
    cout << "\t\t\t\t|            -: Welcome :-              |" << endl;
    cout << "\t\t\t\t|_______________________________________|" << endl;
    cout << "\t\t\t\t\tTime :" << t << endl;
    cout << "\t\t\t\t 1.STUDENT LOGIN" << endl;
    cout << "\t\t\t\t 2.STUDENT REGISTRATION" << endl;
    cout << "\t\t\t\t 3.FORGET PASSWORD" << endl;
    cout << "\t\t\t\t 4.TEACHER LOGIN" << endl;
    cout << "\t\t\t\t 5.TEACHER REGISTRATION" << endl;
    cout << "\t\t\t\t 6.ADMIN LOGIN" << endl;
    cout << "\t\t\t\t 7.EXIT" << endl;
    cout << endl
         << endl;
    cout << "\t\t\t\t\t\t YOUR CHOICE :";
    _flushall();
    cin >> choice;
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
    _flushall();
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
        display(para);
        _flushall();

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
            _flushall();

            return 0;
        }
    }
    getchar();
    _flushall();
    return 0;
}

Student registration(Student *obj)
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

    input_personal_info(obj);
    contact(obj);
    parentDetails(obj);
    hsc_ssc_details(obj);
    other_details(obj);
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
    return *obj;
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

void teacher_dashboard()
{
    int cho;
wrong:
    int opt;
    system("cls");
    printBorder();
    gotoxy(47, 4);
    cout << "-:TEACHER DASHBOARD:-";
    gotoxy(50, 8);
    cout << "MENU";
    gotoxy(40, 10);
    cout << "1.Display Personal Information";
    gotoxy(40, 11);
    cout << "2.Display Timetable";
    gotoxy(40, 12);
    cout << "3.Modify Timetable";
    gotoxy(40, 13);
    cout << "4.Message To Students";
    gotoxy(50, 15);
    cout << "YOUR CHOICE :";
    cin >> opt;

    if (opt < 1 || opt > 5)
    {
        gotoxy(35, 17);
        cout << "Invalid Option !!!";
        sleep(3);
        goto wrong;
    }
    else
    {
        switch (opt)
        {
        // case 1:
        //     display_teacher_info();
        //     break;
        case 2:
            cho = choice();
            if (cho == 1)
            {
                fy.display();
            }
            else if (cho == 2)
            {
                sy.display();
            }
            else if (cho == 3)
            {
                ty.display();
            }
            else
                finy.display();
            break;
        case 3:
            cho = choice();
            if (cho == 1)
            {
                fy.fun();
            }
            else if (cho == 2)
            {
                sy.fun();
            }
            else if (cho == 3)
            {
                ty.fun();
            }
            else
                finy.fun();
            break;
        case 4:
            message();
            break;
        }
    }
    getch();
}

void teacher_login()
{
    int x, y;
    // printing the required format
wrong:
    system("cls");
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
        cout << "TEACHER LOGIN";

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

    string ur, pw;
    int pass_cnt = 0;
    int flag = 0;
    string user;
    char ch;
    char pass[25];
    gotoxy(52, 14);
    cin >> user;

    gotoxy(52, 18);
    int i = 0;
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
        i++;
    }
    pass[i] = '\0';

    ifstream examine;
    examine.open("teacher_login.txt");
    while (examine.eof() == 0)
    {
        examine >> ur;
        examine >> pw;
        if (ur == user && pw == pass)
        {
            flag = 1;
            break;
        }
    }
    examine.close();
    if (flag == 1)
        teacher_dashboard();
    else
        goto wrong;
}

int choice()
{
    int n;
    system("cls");
    gotoxy(20, 17);
    cout << "______________________" << endl;

    gotoxy(20, 18);
    cout << "| enter the choice:  |" << endl;
    gotoxy(20, 19);
    cout << "|____________________|" << endl;
    gotoxy(54, 17);
    cout << " ___________" << endl;
    gotoxy(55, 18);
    cout << "|" << endl;
    gotoxy(65, 18);
    cout << "|" << endl;
    gotoxy(55, 19);
    cout << "|_________|" << endl;
    gotoxy(51, 18);
    gotoxy(20, 2);
    cout << "______________________"
         << "\t\t"
         << "__________" << endl;
    for (int i = 3; i < 15; i += 3)
    {
        gotoxy(20, i);
        cout << "|                    |"
             << "\t\t"
             << "|        |" << endl;
        gotoxy(20, i + 1);
        cout << "|                    |"
             << "\t\t"
             << "|        |" << endl;
        gotoxy(20, i + 2);
        cout << "|____________________|"
             << "\t\t"
             << "|________|" << endl;
    }
    gotoxy(22, 4);
    cout << "First Year";
    gotoxy(22, 7);
    cout << "second Year";
    gotoxy(22, 10);
    cout << "Third Year";
    gotoxy(22, 13);
    cout << "Fourth Year";
    gotoxy(60, 4);
    cout << "1";
    gotoxy(60, 7);
    cout << "2";
    gotoxy(60, 10);
    cout << "3";
    gotoxy(60, 13);
    cout << "4";
    gotoxy(60, 18);

    cin >> n;
    return n;
}

void display(Student obj)
{
    int x, y;

    /*printing the required border of command prompt*/
    printBorder();
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
    _flushall();
    gotoxy(11, 8);
    cout << obj.name;
    gotoxy(11, 11);
    cout << " " << obj.bday_date << "/" << obj.bday_mon << "/" << obj.bday_year;
    gotoxy(52, 11);
    cout << obj.gender;
    gotoxy(20, 15);
    cout << obj.year_study;
    gotoxy(20, 17);
    cout << obj.branch;
    gotoxy(20, 19);
    cout << obj.admission_year;

    getch();

    system("cls");

    printBorder();

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
    cout << obj.mobile_no;
    _flushall();
    gotoxy(59, 8);
    cout << obj.email;
    _flushall();
    gotoxy(14, 15);
    cout << obj.address;
    _flushall();
    gotoxy(13, 18);
    cout << obj.city;
    gotoxy(60, 18);
    cout << obj.pincode;

    gotoxy(13, 20);
    cout << obj.state;
    gotoxy(63, 20);
    cout << obj.nationality;

    getch();

    system("cls");

    char str1[100], str2[60], str3[100], str4[60];

    /*printing the required border of command prompt*/
    printBorder();

    x = 47;
    y = 4;
    gotoxy(x, y);
    cout << "-:PARENT DETAILS:-";

    /*displaying essential details of father's info*/
    gotoxy(5, 8);
    cout << "Father's Name :"; //(17,8)
    gotoxy(60, 8);
    cout << "Profession :"; //(74,8)
    gotoxy(5, 10);
    cout << "Father's Income :"; //(25,10)
    gotoxy(60, 10);
    cout << "Mobile Number :"; //(78,10)

    /*displaying essential details of mother's info*/
    gotoxy(5, 14);
    cout << "Mother's Name :"; //(17,14)
    gotoxy(60, 14);
    cout << "Profession :"; //(74,14)
    gotoxy(5, 16);
    cout << "Mother's Income :"; //(25,16)
    gotoxy(60, 16);
    cout << "Mobile Number :"; //(78,16)

    gotoxy(30, 20);
    cout << "Total Family Income :"; //(52,20)

    /*input of the details*/
    _flushall();
    gotoxy(21, 8);
    cout << obj.father_name;
    _flushall();
    gotoxy(74, 8);
    cout << obj.prof_father;
    _flushall();

    gotoxy(24, 10);
    cout << obj.income_father;
    gotoxy(78, 10);
    cout << obj.mobile_father;
    _flushall();
    gotoxy(20, 14);
    cout << obj.mother_name;
    _flushall();
    gotoxy(73, 14);
    cout << obj.prof_mother;
    _flushall();

    gotoxy(24, 16);
    cout << obj.income_mother;
    gotoxy(76, 16);
    cout << obj.mobile_mother;

    gotoxy(52, 20);
    obj.income_family = obj.income_father + obj.income_mother;
    cout << obj.income_family;

    sleep(3);
    getch();

    system("cls");

    printBorder();
    x = 47;
    y = 4;
    gotoxy(x, y);
    cout << "-: HSC AND SSC DETAILS :-";
    x = 3;
    y = 14;
    gotoxy(x, y);
    while (x <= 115)
    {
        cout << ".";
        x++;
        gotoxy(x, y);
    }

    gotoxy(5, 8);
    cout << "HSC DETAILS";
    gotoxy(5, 10);
    cout << "Percentage :"; //(19,10)
    gotoxy(40, 10);
    cout << "Name of the College :"; //(64,10)
    gotoxy(40, 12);
    cout << "Certificate Uploaded(Y/N) :"; //(70,12)

    gotoxy(5, 16);
    cout << "SSC DETAILS";
    gotoxy(5, 18);
    cout << "Percentage :"; //(19,18)
    gotoxy(40, 18);
    cout << "Name of the School :"; //(64,18)
    gotoxy(40, 20);
    cout << "Certificate Uploaded(Y/N) :"; //(70,20)

    /*------------Input Details --------------*/
    gotoxy(19, 10);
    cout << obj.percent_ssc;
    gotoxy(64, 10);
    _flushall();
    cout << obj.name_ssc_school;
    _flushall();
    gotoxy(70, 12);

    if (obj.is_uploaded_1 == TRUE)
        cout << 'Y';
    else
        cout << 'N';

    gotoxy(19, 18);
    cout << obj.percent_hsc;
    gotoxy(64, 18);
    _flushall();
    cout << obj.name_hsc_school;
    _flushall();
    gotoxy(70, 20);
    if (obj.is_uploaded_2 == TRUE)
        cout << 'Y';
    else
        cout << 'N';
    sleep(3);
    getch();

    system("cls");

    printBorder();

    /*printing the required information on the screen*/
    x = 47;
    y = 4;
    gotoxy(x, y);
    cout << "-: OTHER DETAILS :-";
    x = 2;
    y = 16;
    while (x <= 115)
    {
        cout << ".";
        x++;
        gotoxy(x, y);
    }

    gotoxy(47, 8);
    cout << "Medical Information";
    gotoxy(5, 10);
    cout << "Blood Group :"; //(20,10)
    gotoxy(40, 10);
    cout << "Height (cm):"; //(55,10)
    gotoxy(5, 12);
    cout << "Any Deficiency (Y/N):"; //(29,12)
    gotoxy(40, 12);
    cout << "Type :"; //(49,12)
    gotoxy(5, 14);
    cout << "Is Handicapped (Y/N):"; //(29,14)
    gotoxy(40, 14);
    cout << "Type :"; //(49,14)

    gotoxy(47, 18);
    cout << "Caste Information";
    gotoxy(5, 20);
    cout << "Caste :"; //(15,20)
    gotoxy(40, 20);
    cout << "Scholership Applicable (Y/N):"; //(72,20)

    /*inputting the details from the user*/
    gotoxy(20, 10);
    _flushall();
    cout << obj.blood_grp;
    _flushall();
    gotoxy(54, 10);
    cout << obj.height;
    _flushall();

    gotoxy(15, 20);
    _flushall();
    cout << obj.caste;
    _flushall();
    gotoxy(72, 20);
    if (obj.is_scholership == TRUE)
        cout << 'Y';
    else
        cout << 'N';

    sleep(3);
    getch();
}

int main()
{
    int choice, val;
    system("cls");
    while (1)
    {
        _flushall();
        choice = welcome_page();
        if (choice > 6 || choice < 1)
        {
            goto exit;
        }
        switch (choice)
        {
        case 1:
            system("cls");
            login();
            break;
        case 2:
            system("cls");
            para = registration(&para);
            break;
        case 3:
            system("cls");
            forget();
            break;
        case 4:
            teacher_login();
            break;
        case 5:
            system("cls");
            register_teacher();
            break;
        case 6:
            admin_login();
            break;
        case 7:
            goto exit;
            break;

            // default:
            //     val = failure_page();
            //     if (val == 2)
            //         goto exit;
        }
    }
exit:
    cout << endl
         << endl
         << "\t\t\t\t-: THANK YOU FOR USING SYSTEM :-";
    return 0;
}
