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
    float n1, n2;

    cout << "Vamos verificar qual dos dois n�meros � maior" << endl;
    cout << "Insira os dois n�meros que ser�o comparados" << endl;
    cin >> n1;
    cin >> n2;
    if (n1 > n2)
        cout << "O primeiro n�mero inserido � maior, que �: " << n1;
        else
        {
            cout << "O segundo n�mero inserido � maior, que �: " << n2;
        }

    return 0;
}
