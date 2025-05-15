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
    float metros, cent;

    cout << "Esse programa vai converter metros para centímetros " << endl;
    cout << "Insira a distância em metros " << endl;
    cin >> metros;

    cent = metros*100;

    cout << "A distância em centímetros é: " << cent <<" centímetros";

    return 0;
}
