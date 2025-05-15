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

    cout << "Vamos verificar qual dos dois números é maior" << endl;
    cout << "Insira os dois números que serão comparados" << endl;
    cin >> n1;
    cin >> n2;
    if (n1 > n2)
        cout << "O primeiro número inserido é maior, que é: " << n1;
        else
        {
            cout << "O segundo número inserido é maior, que é: " << n2;
        }

    return 0;
}
