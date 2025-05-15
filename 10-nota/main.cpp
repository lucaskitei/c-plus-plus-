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
    int matricula;
    float n1, n2, n3, media;
    char conceito;

    cout << ("Esse programa informa sobre a nota de um aluno") << endl;
    cout << "Digite a matrícula do aluno: ";
    cin >> matricula;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota : ";
    cin >> n2;
    cout << "Digite a terceira nota : ";
    cin >> n3;

    media = (n1 + n2 * 2 + n3 * 3) / 6;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    cout << "\nMatrícula: " << matricula << endl;
    cout << "Notas: N1 = " << n1 << ", N2 = " << n2 << ", N3 = " << n3 << endl;
    cout << "Média de Aproveitamento: " << media << endl;
    cout << "Conceito: " << conceito << endl;

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        cout << "Situação: APROVADO" << endl;
    } else {
        cout << "Situação: REPROVADO" << endl;
    }

    return 0;
}
