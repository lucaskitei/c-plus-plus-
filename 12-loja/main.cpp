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
    float tinta, area, baldeTinta, valor;
    cout << "Esse programa te ajudar� a compra baldes de tinta!!" << endl;
    cout << "Para come�ar informe o tamanho em metros quadrados da �rea a ser pintada" << endl;
    cin >> area;

    tinta = area/3;
    baldeTinta = tinta/18;
    valor = baldeTinta*80;

    cout << "A quantidade de balde de tinta que ser�o compradas s�o de: " << baldeTinta << " E o valor total dos baldes �: " << valor;

    return 0;
}
