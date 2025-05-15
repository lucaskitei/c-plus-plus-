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
    float sal, i, medsal, maior, filhos, medfilhos, filhostotal, saltotal;

    cout << ("Esse é um programa da prefeitura! Por favor responda a nossa pesquisa!") << endl;
    for (i = 0; i < 15 ; i++)
    {
        cout << ("Informe seu salário: ");
        cin >> sal;
        cout << ("Informe quantos filhos você tem: ");
        cin >> filhos;

        if (sal > maior)
            {
            maior = sal;
            }

        saltotal = sal + saltotal;
        filhostotal = filhos + filhostotal;
    }

    medsal = saltotal/15;
    medfilhos = filhostotal/15;

    cout << ("A média do salário da população é: ") << medsal << (" , a média de filhos é: ") << medfilhos << (" e o maior salário é: ") << maior;

    return 0;
}
