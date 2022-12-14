#include <iostream>
#include <limits>

using namespace std;

int main() {

    cout << "signed char (" << sizeof(signed char) * 8 << " bits) : " <<
         SCHAR_MIN << " .. " << SCHAR_MAX << endl;

    cout << "short (" << sizeof(short) * 8 << " bits) : " <<
         numeric_limits<short>::lowest() << " .. " << numeric_limits<short>::max()
         << endl;

    cout << "int (" << sizeof(int) * 8 << " bits) : " << INT_MIN << " .. " <<
         INT_MAX << endl;

    cout << "long (" << sizeof(long) * 8 << " bits) : " << LONG_MIN << " .. " <<
         LONG_MAX << endl;

    cout << "long long (" << sizeof(long long) * 8 << " bits) : " << LONG_LONG_MIN
         << " .. " << LONG_LONG_MAX << endl;

    return EXIT_SUCCESS;
}
