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

    cout << ("Esse programa vai ler 20 n�meros de sua escolha, e fazer a sua m�dia aritm�tica!") << endl;

    for (i = 0; i < 20 ; i++)
    {
        cout << ("Digite um n�mero para somar na m�dia: ");
        cin >> num;

        soma = num + soma;
    }

    media = soma/20;

    cout << ("A m�dia dos 20 n�meros � = ") << media;
    return 0;
}
