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

    cout << "Esse programa vai converter metros para cent�metros " << endl;
    cout << "Insira a dist�ncia em metros " << endl;
    cin >> metros;

    cent = metros*100;

    cout << "A dist�ncia em cent�metros �: " << cent <<" cent�metros";

    return 0;
}
