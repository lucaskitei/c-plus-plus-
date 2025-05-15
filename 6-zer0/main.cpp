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

    cout << "Esse programa indentifica se o número inserido é positivo ou negativo!!" << endl;
    cout << "Insira um número: " << endl;
    cin >> num;

    if (num != 0){
        if (num > 0){
            cout << "O número insirido é positivo!!";
        }
        else {
            cout << "O número insirido é negativo!!";
        }
    }
    else {
        cout << "O número insirido é igual a zero!!";
    }

    return 0;
}
