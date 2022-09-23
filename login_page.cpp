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
void registration();
int forget();
int welcome_page();
int failure_page();
void admin_login();
void printBorder();
void show();
void modify();
int choice();

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
        getline(cin, tmp);
        msg << tmp << endl;
    }
    gotoxy(30, 20);
    cout << "----------:Message Written Successfully :--------";
    sleep(2);
    system("cls");
}

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
    if (user_counter == 0)
    {
        cout << "\t\t\t\tPLEASE REGISTER FIRST!" << endl
             << endl;
        return 0;
    }
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
