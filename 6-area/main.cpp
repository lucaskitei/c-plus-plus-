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
    float area, raio;
    const float pi = 3.14159;

    cout << "Esse programa calcula a �rea de um c�rculo " << endl;
    cout << "Insira a medida do raio" << endl;
    cin >> raio;

    area = pi*(raio*raio);

    cout << "A �rea do c�rculo �: " << area;

    return 0;
}
