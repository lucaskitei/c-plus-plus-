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
    cout << "Esse programa te ajudará a compra baldes de tinta!!" << endl;
    cout << "Para começar informe o tamanho em metros quadrados da área a ser pintada" << endl;
    cin >> area;

    tinta = area/3;
    baldeTinta = tinta/18;
    valor = baldeTinta*80;

    cout << "A quantidade de balde de tinta que serão compradas são de: " << baldeTinta << " E o valor total dos baldes é: " << valor;

    return 0;
}
