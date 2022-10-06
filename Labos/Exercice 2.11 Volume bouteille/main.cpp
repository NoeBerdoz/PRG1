#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double CM3_EN_LITRE = 1E-3;
    double r1, r2, h1, h2, h3; // [cm]

    cout << "Entrez le rayon du cylindre 1 (en cm) : " << endl;
    cin >> r1;
    cout << "Entrez le rayon du cylindre 2 (en cm) : " << endl;
    cin >> r2;
    cout << "Entrez la hauteur du cylindre 1 (en cm) : " << endl;
    cin >> h1;
    cout << "Entrez la hauteur du cylindre 2 (en cm) : " << endl;
    cin >> h2;
    cout << "Entrez la hauteur du tronc du cone (en cm) : " << endl;
    cin >> h3;

    const double VOLUME_CYLINDRE_1 = M_PI * r1 * r1 * h1,
            VOLUME_CYLINDRE_2 = M_PI * r2 * r2 * h2,
            VOLUME_CONE = M_PI * (r1 * r1 + r1 * r2 + r2 * r2) * h3 / 3,
            VOLUME_TOTAL = (VOLUME_CYLINDRE_1 + VOLUME_CYLINDRE_2 + VOLUME_CONE) *
                           CM3_EN_LITRE;

    cout << fixed << setprecision(1)
         << "La bouteille peut contenir " << VOLUME_TOTAL << " litre"
         << (VOLUME_TOTAL < 2 ? "" : "s") << "." << endl;

    return EXIT_SUCCESS;
}
