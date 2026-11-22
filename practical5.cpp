#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c)
    {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    friend istream& operator>>(istream& in, Complex& c){
        cout << "Enter real and imaginary parts: ";
        in >> c.real >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream& out, Complex c)
    {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main()
{
    Complex c1, c2, sum, product;

    cin >> c1;
    cin >> c2;

    sum = c1 + c2;
    product = c1 * c2;

    cout << "First number: " << c1 << endl;
    cout << "Second number: " << c2 << endl;
    cout << "Addition: " << sum << endl;
    cout << "Multiplication: " << product << endl;return 0;
}