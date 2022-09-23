#include <bits/stdc++.h>
#include "coordinate.h"

#define l l lon long;

using namespace std;
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
  friend void show(){};
  friend void modify(){}:
};
void show()
{

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
  if (n == 1)
  {
    cout << fy.display;
  }
  if (n == 2)
  {
    cout << sy.display;
  }
  if (n == 3)
  {
    cout << ty.display;
  }
  if (n == 4)
  {
    cout << finy.display;
  }
}
void modify()
{
  int n;
step:
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
  system("cls");
  if (n == 1)
  {
    class timetable fy;
    fy.fun();
    goto step:
  }
  else if (n == 2)
  {
    class timetable sy;
    sy.fun();
    goto step:
  }
  else if (n == 3)
  {
    class timetable ty;
    ty.fun();
    goto step:
  }
  else if (n == 4)
  {
    class timetable finy;
    finy.fun();
    goto step:
  }
  else
  {
    gotoxy(30, 22);
    cout << "your input is wrong ";
    goto step;
  }
}

void displaypersonalinfo()
{
  system("cls");
  printBorder();
  gotoxy(25, 4);
  cout << "_________________"
       << "\t\t"
       << "__________" << endl;
  gotoxy(27, 5);
  {
    cout << "Name :";
  }

  gotoxy(25, 6);
  cout << "|_______________|"
       << "\t\t"
       << "|________|" << endl;
}
