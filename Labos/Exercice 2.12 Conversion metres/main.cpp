#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    const double METERS_TO_MILE = 1609.344;
    const double METERS_TO_FEET = 3.28884;
    const double METERS_TO_INCHES = 39.3701;

    unsigned int meters = 0;

    cout << "Entrez le nombre de mètres à convertir (entier > 0) : ";
    cin >> meters;

    double spaces = log10(meters) + 9;

    double metersInMiles = meters / METERS_TO_MILE;
    double metersInFeet = meters / METERS_TO_FEET;
    double metersInInches = meters * METERS_TO_INCHES;

    cout << fixed << setprecision(2);
    cout << meters << " [m] = " << metersInMiles << endl;
    cout << setw(int(spaces)) << right << "= " << metersInFeet << " [mile]" << endl;
    cout << setw(int(spaces)) << right << "= " << metersInInches << " [inch]" << endl;

    return 0;
}
