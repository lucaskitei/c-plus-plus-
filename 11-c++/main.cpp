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
    const float porcentagem = 7;
    float salarioBruto, salarioLiquido, imposto;

    cout << "Esse programa vai calcular o seu sal�rio L�quido!!" << endl;
    cout << "Para come�ar insira o seu sal�rio Bruto" << endl;
    cin >> salarioBruto;

   imposto = (salarioBruto*porcentagem)/100;
   salarioLiquido = salarioBruto-imposto;

    cout << "O seu sal�rio bruto �: " <<salarioBruto << " e seu sal�rio L�quido �:" << salarioLiquido << " E o imposto de renda � de:" << imposto;

    return 0;
}
