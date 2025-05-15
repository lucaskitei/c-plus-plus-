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
    float raio, per, area;
    const float pi = 3.1415;

    cout << "Esse programa calcula a area e o perímetro de um raio qualquer!" << endl;
    cout << "Insira o raio que deseja calcular: " << endl;
    cin >> raio;

    area = pi* (raio*raio);
    per = 2*pi*raio;

    cout << "A área do círculo é: " << area << " e o perímetro é: " << per;

    return 0;
}
