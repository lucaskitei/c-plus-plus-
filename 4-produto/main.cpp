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
    float desc, valor, preco;
    const float i = 0.13;
    char produto [20];

    cout << "Esse programa calcula o valor do desconto de sua compra!!!" << endl;
    cout << "Insira o nome e o valor do produto desejado: " << endl;
    cin >> produto;
    cin >> preco;

    desc = i*preco;
    valor = preco - desc;

    cout << "O Produto que vc deseja comprar é: " << produto <<endl;
    cout << "O valor original do produto é: " << preco <<endl;
    cout << "O valor do desconto é: " << desc << endl;
    cout << "O valor do produto depois do desconto é: " << valor << endl;



    return 0;
}
