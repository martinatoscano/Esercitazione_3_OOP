#include "ComplexNumber.hpp"
#include <iostream>

using namespace ComplexLibrary;
using namespace std;

int main() {


    // Creazione di numeri complessi
    Complex c1(1, 2);
    Complex c2(3, -4);

    // Stampa dei numeri complessi
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    // Somma di numeri complessi
    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    // Coniugato di un numero complesso
    Complex conjugateResult = conjugate(c1);
    cout << "Conjugate of c1: " << conjugateResult << endl;

    // Verifica dell'uguaglianza tra due numeri complessi
    if (c1 == c2) {
        cout << "c1 and c2 are equal" << endl;
    } else {
        cout << "c1 and c2 are not equal" << endl;
    }

    return 0;
}
