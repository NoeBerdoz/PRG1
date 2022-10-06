#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Exercice 1.6" << endl;

    double balance = 10000;
    cout << "Balance: ";
    cin >> balance;
    cout << endl;

    double annualInterest = 6;
    cout << "Annual Interest: ";
    cin >> annualInterest;
    cout << endl;

    double monthlyCashOut = 500;
    cout << "Monthly Cash Out: ";
    cin >> monthlyCashOut;
    cout << endl;

    double monthlyInterest = pow(1.0 + annualInterest / 100.0, 1.0/12.0) - 1.0;
    int monthCount = 0;

    while (balance > 0) {
        cout << "Balance on month N° " << monthCount << " : " << balance << endl;

        double interestValue = balance * monthlyInterest;
        balance = balance + interestValue - monthlyCashOut;
        monthCount++;
    }

    cout << monthCount << endl;

    return 0;
}
