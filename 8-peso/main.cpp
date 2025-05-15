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
    float h,peso,pesoideal;
    char F, M, opc;

    cout << "Esse programa calcula o seu peso ideial!!" << endl;
    cout << "Primeiro insira o seu sexo: " << endl;
    cout << "F - Feminino" << endl;
    cout << "M - Masculino " << endl;
    cin >> opc;
    cout << "Agora informe sua altura em metros: " << endl;
    cin >> h;
    opc = toupper(opc);

    switch (opc)
    {
        case 'F':
            pesoideal = (62.1*h) - 44.7;
            cout << "O seu peso ideal é: " << pesoideal;
            break;

        case 'M':
            pesoideal = (72.7*h) - 58;
            cout << "O seu peso ideal é: " << pesoideal;
            break;

    default:
    cout << "Por favor insira um caracter válido!";
    }


    return 0;
}
