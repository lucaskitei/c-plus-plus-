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
    float soma, num, media, i;

    cout << ("Esse programa vai ler 20 números de sua escolha, e fazer a sua média aritmética!") << endl;

    for (i = 0; i < 20 ; i++)
    {
        cout << ("Digite um número para somar na média: ");
        cin >> num;

        soma = num + soma;
    }

    media = soma/20;

    cout << ("A média dos 20 números é = ") << media;
    return 0;
}
