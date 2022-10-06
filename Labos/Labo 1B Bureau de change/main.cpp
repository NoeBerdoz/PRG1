/*------------------
 Labo : 01B
 Authors : Serex Ophélie, Ansermoz Gwenaël, Berdoz Noé
 Goal : Generating a ticket for an automatic currency exchange machine (CHF to EUR)
 Creation Date : 04.10.2022
 Modified: 06.10.2022 -> Added constant SPACE_WIDTH_CORRECTION and indentation corrections
 Comments : none
 -----------------*/
#include <iostream>
#include <iomanip>

using namespace std;

// Currency exchange configuration
const double EXCHANGE_RATE = 1.024;
const double TRANSACTION_FEES = 5;

// Ticket display configuration
const int TICKET_COL_LEFT_WIDTH = 18;
const int TICKET_COL_RIGHT_WIDTH = 9;
const char TICKET_CORNER = '+';
const char TICKET_COL_SEPARATOR = ':';
const int TICKET_COL_SEPARATOR_WIDTH = 1;
const char TICKET_BORDER_VERTICAL = '|';
const char TICKET_BORDER_HORIZONTAL = '-';
const int TICKET_NUMBER_PRECISION = 2;
const int TICKET_EXCHANGE_RATE_PRECISION = 3;
const int TICKET_WIDTH = TICKET_COL_LEFT_WIDTH + TICKET_COL_RIGHT_WIDTH + TICKET_COL_SEPARATOR_WIDTH;

// Ticket display space correction
const int SPACE_WIDTH_CORRECTION = 1;

int main() {
    unsigned accountNumber = 0;
    cout << "Quel est votre numéro de compte ?" << endl;
    cin >> accountNumber;

    string username;
    cout << "Quel est votre nom de famille ?" << endl;
    cin >> username;

    double accountBalance = 1000;

    cout << fixed << setprecision(TICKET_NUMBER_PRECISION);
    cout << "Solde de votre compte CHF : " << accountBalance << endl;

    cout << setprecision(TICKET_EXCHANGE_RATE_PRECISION);
    cout << "Taux de change : 1 CHF = " << EXCHANGE_RATE << " Euro" << endl;

    cout << setprecision(TICKET_NUMBER_PRECISION);
    cout << "Frais d’opération : " << TRANSACTION_FEES << " CHF" << endl;

    double withdrawalAmount= 0;
    cout << "Entrez la somme souhaitée en Euro :" << endl;
    cin >> withdrawalAmount;
    cout << endl;

    double convertedWithdrawalAmount = withdrawalAmount / EXCHANGE_RATE;
    double finalAccountBalance = accountBalance - convertedWithdrawalAmount - TRANSACTION_FEES;

    // Border top
    cout << TICKET_CORNER;
    cout << setfill(TICKET_BORDER_HORIZONTAL) << setw(TICKET_WIDTH) << "";
    cout << TICKET_CORNER << endl;

    // Space
    cout << TICKET_BORDER_VERTICAL;
    cout << setfill(' ') << setw(TICKET_WIDTH) << "";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Username
    cout << TICKET_BORDER_VERTICAL;
    cout << " " << left << setw(TICKET_WIDTH - SPACE_WIDTH_CORRECTION) << username;
    cout << TICKET_BORDER_VERTICAL << endl;

    // Account number
    cout << TICKET_BORDER_VERTICAL;
    cout << " " << setw(TICKET_WIDTH - SPACE_WIDTH_CORRECTION) << accountNumber;
    cout << TICKET_BORDER_VERTICAL << endl;

    // Space
    cout << TICKET_BORDER_VERTICAL;
    cout << setw(TICKET_WIDTH) << "";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Withdrawal amount
    cout << TICKET_BORDER_VERTICAL;
    cout << setw(TICKET_COL_LEFT_WIDTH) << " Somme Euro";
    cout << TICKET_COL_SEPARATOR;
    cout << right << setw(TICKET_COL_RIGHT_WIDTH - SPACE_WIDTH_CORRECTION) << withdrawalAmount << " ";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Exchange rate
    cout << setprecision(TICKET_EXCHANGE_RATE_PRECISION);

    cout << TICKET_BORDER_VERTICAL;
    cout << left << setw(TICKET_COL_LEFT_WIDTH) << " 1 CHF en Euro";
    cout << TICKET_COL_SEPARATOR;
    cout << right << setw(TICKET_COL_RIGHT_WIDTH - SPACE_WIDTH_CORRECTION) << EXCHANGE_RATE << " ";
    cout << TICKET_BORDER_VERTICAL << endl;

    cout << setprecision(TICKET_NUMBER_PRECISION);

    // Space
    cout << TICKET_BORDER_VERTICAL;
    cout << setw(TICKET_WIDTH) << "";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Converted withdrawal amount
    cout << TICKET_BORDER_VERTICAL;
    cout << left << setw(TICKET_COL_LEFT_WIDTH) << " Somme CHF";
    cout << TICKET_COL_SEPARATOR;
    cout << right << setw(TICKET_COL_RIGHT_WIDTH - SPACE_WIDTH_CORRECTION) << convertedWithdrawalAmount << " ";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Transaction fees
    cout << TICKET_BORDER_VERTICAL;
    cout << left << setw(TICKET_COL_LEFT_WIDTH) << " Frais";
    cout << TICKET_COL_SEPARATOR;
    cout << right << setw(TICKET_COL_RIGHT_WIDTH - SPACE_WIDTH_CORRECTION) << TRANSACTION_FEES << " ";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Space
    cout << TICKET_BORDER_VERTICAL;
    cout << setw(TICKET_WIDTH) << "";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Final account balance
    cout << TICKET_BORDER_VERTICAL;
    cout << left << setw(TICKET_COL_LEFT_WIDTH) << " Solde Compte";
    cout << TICKET_COL_SEPARATOR;
    cout << right << setw(TICKET_COL_RIGHT_WIDTH - SPACE_WIDTH_CORRECTION) << finalAccountBalance << " ";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Space
    cout << TICKET_BORDER_VERTICAL;
    cout << setw(TICKET_WIDTH) << "";
    cout << TICKET_BORDER_VERTICAL << endl;

    // Border bottom
    cout << TICKET_CORNER;
    cout << setfill(TICKET_BORDER_HORIZONTAL) << setw(TICKET_WIDTH) << "";
    cout << TICKET_CORNER << endl;

    return 0;
}
