#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal = " << decimal << endl;
    cout << "Hexadecimal = " << hex << uppercase << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;

    return 0;
}
