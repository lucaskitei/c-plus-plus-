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
    int n1, n2, soma;
    cout << "Esse programa faz a soma de dois n�meros" << endl;
    cout << "Para come�ar insira o primeiro n�mero" << endl;
    cin >> n1;
    cout << "Agora insira o segundo n�mero" << endl;
    cin >> n2;

    soma = n1 + n2;

    cout << "A soma dos dois n�meros �: " << soma << endl;

    return 0;
}
