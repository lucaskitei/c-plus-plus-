#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale.h>
#include <iomanip>
#include <cctype>

using namespace std;

int main(int argc, char**argv)
{
    setlocale (LC_ALL,"portuguese");
    int num;

    cout << ("Esse programa ir� mostrar se o n�mero digitado � impar ou par!!") << endl;
    cout << ("Insira o n�mero que deseja saber se � impar ou par: ");
    cin >> num;
    if (num % 2 == 0)
        cout << ("O n�mero digitado � par!!");
    else
    {
        cout << ("O n�mero digitado � impar!!");
    }
    return 0;
}
