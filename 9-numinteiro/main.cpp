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

    cout << ("Esse programa irá mostrar se o número digitado é impar ou par!!") << endl;
    cout << ("Insira o número que deseja saber se é impar ou par: ");
    cin >> num;
    if (num % 2 == 0)
        cout << ("O número digitado é par!!");
    else
    {
        cout << ("O número digitado é impar!!");
    }
    return 0;
}
