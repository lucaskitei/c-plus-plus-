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
    int negativo, num,i;

    cout << ("Esse programa vai ler 15 n�meros de sua escolha, e diremos quantos s�o negativos") << endl;

    for (i = 0; i < 15 ; i++)
    {
        cout << ("Digite um n�mero positivo ou negativo: ");
        cin >> num;

        if (num < 0)
            negativo++;
    }
    cout << ("O total de n�meros negativos � = ") << negativo;
    return 0;
}
