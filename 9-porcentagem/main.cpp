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
    const float porcentagem = 12 ;
    float resultado, resultadoFinal;

    cout << "Vamos transformar 12% de 2112" << endl;

    resultado = 2112*porcentagem;
    resultadoFinal = resultado/100;

    cout << "O resultado é: " << resultadoFinal;

    return 0;
}
