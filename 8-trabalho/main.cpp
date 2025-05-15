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
    int salarioMensal, horasMes, salarioHoras;
    cout << "Esse programa calcula quanto é o seu salário mensal" << endl;
    cout << "Primeiro insira o seu salário por horas trabalhadas" << endl;
    cin >> salarioHoras;
    cout << "Agora insira quantas horas você trabalha por mês" << endl;
    cin >> horasMes;

    salarioMensal = horasMes*salarioHoras;

    cout << "O seu salário mensal é: " << salarioMensal;

    return 0;
}
