#include <iostream>
#include <limits>

using namespace std;

long long numberBug = 9223372036854775807;

int space = 1.5;

char hello = 90;

int main() {

    cout << "Hello, World!" << endl;
    cout << numberBug << endl;

    cout << "long long: " << numeric_limits<long long>::lowest() << " -> "
            << numeric_limits<long long>::max() << endl;

    cout << "int: " << numeric_limits<int>::lowest() << " -> "
         << numeric_limits<int>::max();

    cout << "int with 1.5 as value = " << space << endl;

    cout << hello;
    return 0;
}
