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

    cout << "Esse programa vai calcular o seu salário Líquido!!" << endl;
    cout << "Para começar insira o seu salário Bruto" << endl;
    cin >> salarioBruto;

   imposto = (salarioBruto*porcentagem)/100;
   salarioLiquido = salarioBruto-imposto;

    cout << "O seu salário bruto é: " <<salarioBruto << " e seu salário Líquido é:" << salarioLiquido << " E o imposto de renda é de:" << imposto;

    return 0;
}
