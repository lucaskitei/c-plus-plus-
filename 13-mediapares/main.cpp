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
    float soma, media, i,par;
    int num;

    cout << ("Esse programa vai ler 20 números de sua escolha, e fazer a sua média aritmética!") << endl;

    for (i = 0; i < 20 ; i++)
    {
        cout << ("Digite um número para somar na média: ");
        cin >> num;

        if (num % 2 == 0)
        {
            par++;
            soma = num + soma;
        }
    }

    media = soma/par;

    cout << ("A média dos números pares é = ") << media;
    return 0;
}
