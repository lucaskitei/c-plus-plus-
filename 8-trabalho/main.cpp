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
    cout << "Esse programa calcula quanto � o seu sal�rio mensal" << endl;
    cout << "Primeiro insira o seu sal�rio por horas trabalhadas" << endl;
    cin >> salarioHoras;
    cout << "Agora insira quantas horas voc� trabalha por m�s" << endl;
    cin >> horasMes;

    salarioMensal = horasMes*salarioHoras;

    cout << "O seu sal�rio mensal �: " << salarioMensal;

    return 0;
}
