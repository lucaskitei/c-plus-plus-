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

    cout << "Esse programa indentifica se o n�mero inserido � positivo ou negativo!!" << endl;
    cout << "Insira um n�mero: " << endl;
    cin >> num;

    if (num >= 0) {
            cout << "O n�mero inserido � positivo!!";
    }
    else
        {
            cout << "O n�mero digitado � negativo!!!";
        }
    return 0;
}
