#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale.h>
#include <iomanip>
#include <cctype>
#include <windows.h>

using namespace std;

int main(int argc, char**argv)
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);


    int num,i,j;

    cout << "Esse programa recebe o número de duas matrizes e mostra a soma entre elas!!" << endl;
    cout << "Para começar, insira o tamanho da sua matriz: ";

    cin >> num;
    int matriz1[num][num], matriz2[num][num], resultado[num][num];

    cout << "Digite os elementos da primeira matriz:\n";
    for (i = 0; i < num; i++) {
        for ( j = 0; j < num; j++) {
            cout << "Digite o valor para a matriz [" << i + 1 << ", " << j + 1 << "]" << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os elementos da segunda matriz:\n";
    for ( i = 0; i < num; i++) {
        for ( j = 0; j < num; j++) {
            cout << "Digite o valor para a matriz [" << i + 1 << ", " << j + 1 << "]" << endl;
            cin >> matriz2[i][j];
        }
    }

    for ( i = 0; i < num; i++) {
        for ( j = 0; j < num; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << "Matriz resultante da soma:\n";
    for ( i = 0; i < num; i++) {
        for ( j = 0; j < num; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
