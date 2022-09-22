void registration()
{
    system("cls");
    printBorder();
    //     int pass_cnt = 0;
    //     string user;
    //     char ch;
    //     char pass[25];
    //     cout << "\t\t\t\t\t _____________________________" << endl;
    //     cout << "\t\t\t\t\t|        REGISTRATION         |" << endl;
    //     cout << "\t\t\t\t\t|_____________________________|" << endl
    //          << endl;

    //     cout << "\t\t\tENTER USERNAME :";
    //     cin >> user;
    //     cout << endl;
    // step:
    //     cout << "\t\t\tENTER PASSWORD :";
    //     int i = 0, flag = 0;
    //     while (1)
    //     {
    //         ch = getche();
    //         if (ch == 13)
    //         {
    //             break;
    //         }
    //         pass[i] = ch;
    //         printf("\b*");
    //         if (ch == '~' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    //             flag = 1;
    //         i++;
    //     }
    //     pass[i] = '\0';
    //     // cin >> pass;
    //     cout << endl;
    //     pass_cnt = 0;
    //     while (pass[pass_cnt] != '\0')
    //     {
    //         pass_cnt++;
    //     }
    //     if (pass_cnt < 8)
    //     {
    //         cout << "Password length is not sufficient: Please Re-enter !" << endl;
    //         sleep(2);
    //         system("cls");
    //         goto step;
    //     }
    //     else if (flag == 0)
    //     {
    //         gotoxy(23, 30);
    //         cout << "No special Character detected !" << endl;
    //         cout << "Password is not strong.....please re-enter" << endl;
    //         sleep(2);
    //         system("cls");
    //         goto step;
    //     }
    //     else
    //     {
    //         system("cls");
    //         user_counter++;
    //         ofstream regs;
    //         regs.open("test_file_1.txt", ios_base::app);
    //         if (user_counter)
    //         {
    //             regs << endl
    //                  << user << endl;
    //             regs << pass;
    //         }
    //         else
    //         {
    //             regs << user << endl;
    //             regs << pass;
    //         }
    //     jump:
    //         input_personal_info();
    //         bool test = isCorrect();
    //         if (test == TRUE)
    //             goto jump;
    //         contact();
    //         system("cls");

    //         cout << "\t\t\t -: YOUR REGISTRATION IS SUCCESSFULLY COMPLETED :--" << endl;

    //         cout << endl
    //              << endl
    //              << endl;
    //         cout << "\t\t\t\t\t(: THANK YOU FOR REGISTERING :)" << endl;
    //         sleep(4);
    //         getchar();
    //         return;
    //     }
}