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

    cout << "Insira um n�mero e o programa ir� dizer se � positivo ou negativo" << endl;
    cin >> num;
    if (num >= 0)
    {
        cout << "O n�mero que voc� digitou � positivo";
    }
    else
    {
    cout << "O n�mero que voc� digitou � negativo";
    }
    return 0;
}
