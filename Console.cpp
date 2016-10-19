#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>

using namespace std;

void Welcome()
{
    string wctext = "Welcome back, my Master";
    for (int i=0; i < wctext.size(); i++)
    {
        cout << wctext[i];
        Sleep(100);
    }
}

int Login()
{
    string login, pass;
    string cor_login1 = "Reigner";
    string cor_login2 = "guest";
    string cor_pass1 = "REiGN828";
    string cor_pass2 = "guest";

    cout << endl << "Login: ";
    cin >> login;
    cout << endl << "Password: ";
    cin >> pass;
    if (login == cor_login1 && pass == cor_pass1)
    {
        system("cls");
        Welcome();
    }
    else if (login == cor_login2 && pass == cor_pass2)
    {
        system("cls");
        cout << "Welcome guest";
        return 0;
    }
    else
    {
        system("cls");
        cout << endl <<"\aError. This account do not exist. Please check if everything right." << endl;
        Sleep(1000);
        system("cls");
        return Login();
    }



}

int main()
{
    Login();
    return 0;
}
