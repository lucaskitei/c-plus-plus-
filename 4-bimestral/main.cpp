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
    float n1, n2, n3, n4, media;
    cout << "Esse programa faz a media das notas bimestrais" << endl;
    cout << "Para começar insira as suas 4 notas do bimestre" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    media = (n1 + n2 + n3 + n4)/4;

    cout << "A sua média é: " << media;
    return 0;
}
