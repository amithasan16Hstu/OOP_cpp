#include <iostream>
using namespace std;
class Fraction
{
private:
   int numerator;
   int denominator;

public:
   Fraction(int num, int denom) : numerator(num), denominator(denom)
   {
      simplify();
   }

   // Function to simplify the fraction
   void simplify()
   {
      int gcd = findGCD(numerator, denominator);
      numerator /= gcd;
      denominator /= gcd;
   }

   // Function to find the greatest common divisor (GCD)
   int findGCD(int a, int b)
   {
      if (b == 0)
         return a;
      return findGCD(b, a % b);
   }

   // Overload the == operator
   bool operator==(Fraction other)
   {
      return (numerator == other.numerator && denominator == other.denominator);
   }

   // Overload the != operator
   bool operator!=(Fraction other)
   {
      return !(*this == other);
   }

   // Overload the >= operator
   bool operator>=(Fraction other)
   {
      return (numerator * other.denominator >= other.numerator * denominator);
   }

   // Overload the <= operator
   bool operator<=(Fraction other)
   {
      return (numerator * other.denominator <= other.numerator * denominator);
   }

   // Display the fraction
   void display()
   {
      cout << numerator << "/" << denominator;
   }
};

int main()
{
   Fraction frac1(3, 4);
   Fraction frac2(1, 2);

   cout << "Fraction 1: ";
   frac1.display();
   cout << endl;

   cout << "Fraction 2: ";
   frac2.display();
   cout << endl;

   if (frac1 == frac2)
      cout << "Fraction 1 is equal to Fraction 2" << endl;
   else
      cout << "Fraction 1 is not equal to Fraction 2" << endl;

   if (frac1 >= frac2)
      cout << "Fraction 1 is greater than or equal to Fraction 2" << endl;
   else
      cout << "Fraction 1 is less than Fraction 2" << endl;

   return 0;
}
