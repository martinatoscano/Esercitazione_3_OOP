#include "ComplexNumber.hpp"

namespace ComplexLibrary{

// definizione della stampa di un complesso
ostream& operator<<(ostream& os, const Complex &c)
{
    os << c.real;
    if(c.imag >= 0)
        (os << "+");
    os << c.imag << "i";
    return os;
}

// definizione della somma tra complessi
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex c(c1.real + c2.real, c1.imag + c2.imag);
    return c;
}

//definizione della verifica dell'uguaglianza tra complessi
bool operator== (const Complex &c1, const Complex &c2)
{
    if(c1.real - c2.real < 1.e-16 && c1.imag - c2.imag < 1.e-16)
        return true;
    else
        return false;
}

// definizione della funzione che restituisce il coniugato di un complesso
Complex conjugate(const Complex &c)
{
    Complex conj(c.real, -c.imag);
    return conj;
}

}
