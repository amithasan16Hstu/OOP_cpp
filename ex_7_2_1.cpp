#include <iostream>
using namespace std;
class Complex
{
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    Complex operator++()
    {
        Complex temp;
        temp.real = ++real;
        temp.imaginary = ++imaginary;
        return temp;
    }

    // Unary operator overloading for decrement (--)
    Complex operator--()
    {
        Complex temp;
        temp.real = --real;
        temp.imaginary = --imaginary;
        return temp;
    }

    // Binary operator overloading for addition (+)
    Complex operator+(Complex other)
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Binary operator overloading for subtraction (-)
    Complex operator-(Complex other)
    {
        Complex result;
        result.real = real - other.real;
        result.imaginary = imaginary - other.imaginary;
        return result;
    }

    // Binary operator overloading for multiplication (*)
    Complex operator*(Complex other)//(a + ib) (c + id) = (ac - bd) + i(ad + bc).
    {
        Complex result;
        result.real = (real * other.real) - (imaginary * other.imaginary);
        result.imaginary = (real * other.imaginary) + (imaginary * other.real);
        return result;
    }

    // Binary operator overloading for division (/)
    Complex operator/(Complex other)
    {
        Complex result;
        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        result.real = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
        result.imaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
        return result;
    }

    void display() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex a(2, 3);
    Complex b(1, 4);

    // Unary operator overloading
    Complex c = ++a;
    Complex d = --b;

    cout << "After incrementing a: ";
    a.display();
    cout << "After decrementing b: ";
    b.display();

    // Binary operator overloading
    Complex sum = c + d;
    Complex diff = c - d;
    Complex product = c * d;
    Complex quotient = c / d;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    product.display();
    cout << "Quotient: ";
    quotient.display();

    return 0;
}
