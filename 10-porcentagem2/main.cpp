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
    const float porcentagem = 12;
    float resultado, resultadoFinal, valor;

    cout << "Esse programa calcula 12% do valor que quiser!" << endl;
    cout << "Primeiro insira algum valor para calcular a porcentagem" << endl;
    cin >> valor;

    resultado = valor*porcentagem;
    resultadoFinal = resultado/100;

    cout << "O resultado é: " << resultadoFinal;

    return 0;
}
