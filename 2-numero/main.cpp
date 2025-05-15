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
    int num;

    cout << "Informe um número e o programa vai mostrar na tela o número escolhido" << endl;
    cin >> num;
    cout << "O número informado foi: " << num;


return 0;
}
