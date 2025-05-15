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


    int num;

    cout << "Esse programa recebe e mostra uma matriz SEM a diagonal principal" << endl;
    cout << "Isira o formato da matriz: "
    cin >> num;
    int matriz[num][num],i ,j;

    for (i = 0; i < num ; i++){
        for (j = 0; j < num; j++){
            cout << "Digite o valor para a matriz [" << i + 1 << ", " << j + 1 << "]" << endl;
            cin >> matriz[i][j];
        }
    }
    cout << endl << "A matriz sem a diagonal principal: " << endl;
    for (i = 0; i < num ; i++){
        for (j = 0; j < num; j++){
            if (i != j){
    cout << matriz[i][j] << endl;
            }
        }
        cout << endl;
    }


    return 0;
}
