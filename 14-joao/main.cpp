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
    float excedente, multa, peixes;
    const int regulamento = 50;

    cout << "Programa do joao o pescador para ver o peso excedente e a multa recebida!!" << endl;
    cout << "Jo�o, por favor insira quantos quilos de peixo voc� pegou" << endl;
    cin >> peixes;
    if (peixes <= 50)
    cout << "N�o houve multa, pois a quantidade de peixes em quilos n�o excedeu o regulamento de 50 quilos" << endl;
    else
    {
        excedente = peixes - regulamento;
        multa = excedente*4;
        cout << "Lamento, jo�o... mas voc� excedeu: " << excedente << " kg do regulamento e deve pagar uma multa de: " << multa << " Reais";
    }

    return 0;
}
