#include <iostream>
#include <unistd.h>
#include "coordinate.h"
#include "mainheader.h"
#include <string>
#include <fstream>
Student obj;
teacher t;
void input_personal_info()
{
    int gender_opt;
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
    getline(cin, obj.name);
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
    printBorder();
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
    system("cls");
    int x, y, cnt;
    char ch;
    string dummy_email;
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
    cin >> obj.mobile_no;
    _flushall();
    gotoxy(59, 8);
    getline(cin, obj.email);
    _flushall();
    gotoxy(14, 15);
    getline(cin, obj.address);
    _flushall();
    gotoxy(13, 18);
    cin >> obj.city;
    gotoxy(60, 18);
    cin >> obj.pincode;

    gotoxy(13, 20);
    cin >> obj.state;
    gotoxy(63, 20);
    cin >> obj.nationality;
}

void parentDetails()

{
    system("cls");
    int x, y;
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
    getline(cin, obj.father_name);
    _flushall();
    gotoxy(74, 8);
    getline(cin, obj.prof_father);
    _flushall();

    gotoxy(24, 10);
    cin >> obj.income_father;
    gotoxy(78, 10);
    cin >> obj.mobile_father;
    _flushall();
    gotoxy(20, 14);
    getline(cin, obj.mother_name);
    _flushall();
    gotoxy(73, 14);
    getline(cin, obj.prof_mother);
    _flushall();

    gotoxy(24, 16);
    cin >> obj.income_mother;
    gotoxy(76, 16);
    cin >> obj.mobile_mother;

    gotoxy(52, 20);
    obj.income_family = obj.income_father + obj.income_mother;
    cout << obj.income_family;

    sleep(3);
}

void hsc_ssc_details()
{
    system("cls");
    int x, y;
    char ch;
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
    cin >> obj.percent_ssc;
    gotoxy(64, 10);
    _flushall();
    getline(cin, obj.name_ssc_school);
    _flushall();
    gotoxy(70, 12);
    cin >> ch;
    if (ch == 'Y')
        obj.is_uploaded_1 = TRUE;
    else
        obj.is_uploaded_1 = FALSE;

    gotoxy(19, 18);
    cin >> obj.percent_hsc;
    gotoxy(64, 18);
    _flushall();
    getline(cin, obj.name_hsc_school);
    _flushall();
    gotoxy(70, 20);
    cin >> ch;
    if (ch == 'Y')
        obj.is_uploaded_2 = TRUE;
    else
        obj.is_uploaded_2 = FALSE;
}

void other_details()
{
    system("cls");
    int x, y;
    char ch;
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
    getline(cin, obj.blood_grp);
    _flushall();
    gotoxy(54, 10);
    cin >> obj.height;
    _flushall();
    gotoxy(29, 12);
    cin >> ch;
    if (ch == 'Y')
    {
        gotoxy(49, 12);
        _flushall();
        getline(cin, obj.deficiency);
        _flushall();
    }
    else
    {
        gotoxy(49, 12);
        cout << "Not Deficient";
    }

    _flushall();
    gotoxy(29, 14);
    cin >> ch;
    if (ch == 'Y')
    {
        gotoxy(49, 14);
        _flushall();
        getline(cin, obj.deficiency);
        _flushall();
    }
    else
    {
        gotoxy(49, 14);
        cout << "Not Handicapped";
    }

    gotoxy(15, 20);
    _flushall();
    getline(cin, obj.caste);
    _flushall();
    gotoxy(72, 20);
    cin >> ch;
    if (ch == 'Y')
        obj.is_scholership = TRUE;
    else
        obj.is_scholership = FALSE;
}

teacher register_teacher()
{
    printBorder();

    // printing the required information
    gotoxy(47, 4);
    cout << "-:TEACHER REGISTRATION:-";

    gotoxy(5, 10);
    cout << "Name :"; //(14,10)
    gotoxy(60, 10);
    cout << "Age :"; //(68,10)

    gotoxy(5, 13);
    cout << "Designation :"; //(21,13)
    gotoxy(60, 13);
    cout << "Teacher Id :"; //(74,13)

    gotoxy(5, 16);
    cout << "Subject :"; //(17,16)
    gotoxy(60, 16);
    cout << "Qualification :"; //(78,16)

    gotoxy(5, 19);
    cout << "Experience :"; //(19,19)

    /*inputting the details*/
    _flushall();
    gotoxy(14, 10);
    getline(cin, t.name);
    _flushall();
    gotoxy(68, 10);
    cin >> t.age;
    gotoxy(21, 13);
    _flushall();
    getline(cin, t.designation);
    gotoxy(74, 13);
    cin >> t.teacher_id;
    _flushall();
    gotoxy(17, 16);
    getline(cin, t.subject);
    gotoxy(78, 16);
    _flushall();
    getline(cin, t.degree);
    gotoxy(19, 19);
    cin >> t.experience;

    system("cls");
    system("color 2");
    printBorder();
    gotoxy(40, 15);
    cout << "---REGISTRATION COMPLETED SUCCESSFULLY---";
    sleep(3);
    system("color f");
    return t;
}