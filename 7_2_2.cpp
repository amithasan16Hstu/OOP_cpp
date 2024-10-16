#include <iostream>
using namespace std;
class Complex
{
   double real, img;

public:
   Complex() {}
   Complex(double x, double y)
   {
      real = x;
      img = y;
   }
   Complex operator++()
   {
      Complex temp;
      temp.real = ++real;
      temp.img = ++img;
      return temp;
   }
   Complex operator--()
   {
      Complex temp;
      temp.real = --real;
      temp.img = --img;
      return temp;
   }
   Complex operator+(Complex a)
   {
      Complex temp;
      temp.real = real + a.real;
      temp.img = real + a.img;
      return temp;
   }
   Complex operator-(Complex a)
   {
      Complex temp;
      temp.real = real - a.real;
      temp.img = real - a.img;
      return temp;
   }
   Complex operator*(Complex a) // a + ib) (c + id) = (ac - bd) + i(ad + bc).
   {
      Complex temp;
      temp.real = (real * a.real) - (img * a.img);
      temp.img = (real * a.img) + (img * a.real);
      return temp;
   }
   Complex operator/(Complex a) // a + ib) (c + id) = (ac - bd) + i(ad + bc).
   {
      Complex temp;
      double dem = (a.real * a.real) + (a.img * a.img);
      temp.real = ((real * a.real) + (img * a.img)) / dem;
      temp.img = ((real * a.img) - (img * a.real)) / dem;
      return temp;
   }
   void display()
   {
      cout << real << " " << img << endl;
   }
};
int main()
{
   Complex s1(10, 20), s2(30, 40);
   Complex s3 = ++s1;
   Complex s4 = --s2;
   s1.display();
   s2.display();
   Complex sum = s1 + s2;
   Complex sub = s1 - s2;
   Complex mul = s1 * s2;
   Complex dif = s1 / s2;
   sum.display();
   sub.display();
   mul.display();
   dif.display();
}