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

    cout << "Informe um n�mero e o programa vai mostrar na tela o n�mero escolhido" << endl;
    cin >> num;
    cout << "O n�mero informado foi: " << num;


return 0;
}
