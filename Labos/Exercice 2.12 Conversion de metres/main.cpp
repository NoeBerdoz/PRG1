#include <iostream>

using namespace std;

int main() {
    unsigned int meters = 0;

    cout << "Entrez le nombre de mètres à convertir (entier > 0) : ";
    cin >> meters;
    double metersInMiles = meters / double(1609);

    cout << "END" << endl;

    return 0;
}
