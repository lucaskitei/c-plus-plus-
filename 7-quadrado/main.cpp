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
    float lado, area, dobro;
    cout << "Esse programa calcula o dobro da �rea de um quadrado!!" << endl;
    cout << "Para come�ar insira a medida de um dos lados" <<endl;
    cin >> lado;

    area = lado*lado;
    dobro = area*2;

    cout << "O dobro da �rea �: " << dobro;
    return 0;
}
