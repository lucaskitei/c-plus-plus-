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
    int media, n1, n2;

    cout << "Esse programa vai calcular a média de um aluno" << endl;
    cout << "Primeiro insira as duas notas desse aluno" << endl;
    cin >> n1;
    cin >> n2;

    media = (n1 + n2)/2;

    if (media == 10)
    {
        cout << "O aluno foi aprovado com distinção!!!!!";
    }
    else if (media >= 7)
    {
        cout << "O aluno foi aprovado";
    }
    else
    {
        cout << "O aluno foi reprovado";
    }
    return 0;
}
