#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    const int width = 20;
    unsigned int number = 0;

    cout << "Entrer un nombre entier > 0 :";
    cin >> number;
    cout << endl;

    int numberLog10 = log10(number);

    cout << left;
    cout << setw(width) << "Nombre saisi" << " : " << number << endl;
    cout << setw(width) << "Nombre de chiffres" << " : " << numberLog10 + 1 << endl;
    cout << setw(width) << "Premier chiffre" << " : " << int(number / pow(10, numberLog10))<< endl;
    cout << setw(width) << "Dernier chiffre" << " : " << number % 10 << endl;

    return 0;
}
