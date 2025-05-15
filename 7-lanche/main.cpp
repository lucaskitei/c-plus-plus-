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
    float quant, total;
    int i, cod;

    cout << ("Bem-vindo ao carrinnho de lanches!!") << endl;
    cout << ("Especificação") << setw (18) << ("Código") << setw (18) << ("Preço") << endl; //13 Letras espec
    cout << ("Cachorro quente") << setw (16) << ("100") << setw (18) << ("9,20") << endl;
    cout << ("Bauru simples") << setw (18) << ("101") << setw (18) << ("12,00") << endl;
    cout << ("Bauru com ovo") << setw (18) << ("102") << setw (18) << ("13,00") << endl;
    cout << ("Hamburguer") << setw (21) << ("103") << setw (18) << ("10,00") << endl;
    cout << ("Cheese burguer") << setw (17) << ("104") << setw (18) << ("12,00") << endl;
    cout << ("Refrigerante Lata") << setw (14) << ("105") << setw (18) << ("5,00") << endl;
    cout << ("Água") << setw (27) << ("106") << setw (18) << ("3,00") << endl;
    cout << ("Digite o código para pedir o lanche: ");
    cin >> cod;

    for (i=0; i<1; i++)
    {
        switch (cod)
        {
            case 100:
                cout << ("Você escolheu o Cachorro quente! Informar a quantidade: ");
                cin >> quant;
                total = quant*9.20;
                break;

            case 101:
                cout << ("Você escolheu o Bauru Simples! Informar a quantidade: ");
                cin >> quant;
                total = quant*12.00;
                break;

            case 102:
                cout << ("Você escolheu o Bauru com Ovo! Informar a quantidade: ");
                cin >> quant;
                total = quant*13.00;
                break;

            case 103:
                cout << ("Você escolheu o Hamburguer! Informar a quantidade: ");
                cin >> quant;
                total = quant*10;
                break;

            case 104:
                cout << ("Você escolheu o Cheese Burguer! Informar a quantidade: ");
                cin >> quant;
                total = quant*12.00;
                break;

            case 105:
                cout << ("Você escolheu o Refrigerante Lata! Informar a quantidade: ");
                cin >> quant;
                total = quant*5;
                break;

            case 106:
                cout << ("Você escolheu Água! Informar a quantidade: ");
                cin >> quant;
                total = quant*3;
                break;

            default:
                cout << "Opção inválida, por favor digitar outro código!" << endl;
        }
    }
    cout << "O total do pedido foi:  " << total;

    return 0;
}
