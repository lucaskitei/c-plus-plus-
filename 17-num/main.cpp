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
    int n1,n2,n3;

    cout << "Esse programa vai mostrar qual � o maior n�mero entre 3 n�meros que voc� quiser!" << endl;
    cout << "Primeiro insira 3 n�meros que voce deseja" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "O primeiro n�mero � o maior: " << n1;
    }
        else if (n1 < n2 && n2 > n3)
        {
            cout << "O segundo n�mero � o maior: " << n2;
        }
        else
        {
            cout << "O terceiro n�mero � o maior: " << n3;
        }
    return 0;
}
