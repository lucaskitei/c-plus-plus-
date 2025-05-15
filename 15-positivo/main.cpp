#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale.h>
#include <iomanip>

using namespace std;

int main(int argc, char**argv)
{
    setlocale (LC_ALL,"portuguese");
    float num;

    cout << "Insira um número e o programa irá dizer se é positivo ou negativo" << endl;
    cin >> num;
    if (num >= 0)
    {
        cout << "O número que você digitou é positivo";
    }
    else
    {
    cout << "O número que você digitou é negativo";
    }
    return 0;
}
