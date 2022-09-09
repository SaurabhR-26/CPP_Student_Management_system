#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>
#include <conio.h>

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
    string username, password, ur, pw;
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
    cin >> password;
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
    system("cls");
    int pass_cnt = 0;
    string user, pass;
    cout << "\t\t\t\t\t _____________________________" << endl;
    cout << "\t\t\t\t\t|        REGISTRATION         |" << endl;
    cout << "\t\t\t\t\t|_____________________________|" << endl
         << endl;

    cout << "\t\t\tENTER USERNAME :";
    cin >> user;
    cout << endl;
step:
    cout << "\t\t\tENTER PASSWORD :";
    cin >> pass;
    cout << endl;
    pass_cnt = 0;
    while (pass[pass_cnt] != '\0')
    {
        pass_cnt++;
    }
    if (pass_cnt < 8)
    {
        cout << "Password length is not sufficient: Please Re-enter !" << endl;
        sleep(2);
        system("cls");
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
            regs << pass;
        }

        cout << "\t\t\t -: YOUR REGISTRATION IS SUCCESSFULLY COMPLETED :--" << endl;

        cout << endl
             << endl
             << endl;
        cout << "\t\t\t\t\t(: THANK YOU FOR REGISTERING :)" << endl;
        sleep(4);
        getchar();
        return;
    }
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
            registration();
            break;
        case 3:
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