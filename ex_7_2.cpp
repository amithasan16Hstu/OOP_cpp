#include <iostream>
using namespace std;
class space
{
    float img, real;

public:
    space() {}
    space(float z)
    {
        img = real = z;
    }
    space(float x, float y)
    {
        img = x;
        real = y;
    }
    void display()
    {
        cout << img << "j"
             << " " << real << endl;
    }
    space operator+(space s1)
    {
        space temp;
        temp.real = real + s1.real;
        temp.img = img + s1.img;
        return temp;
    }
    space operator-(space s1)
    {
        space temp;
        temp.real = real - s1.real;
        temp.img = img - s1.img;
        return temp;
    }
    space operator*(space s1)
    {
        space temp;
        temp.real = real * s1.real;
        temp.img = img * s1.img;
        return temp;
    }
    space operator/(space s1)
    {
        space temp;
        temp.real = real / s1.real;
        temp.img = img / s1.img;
        return temp;
    }
    space operator++()
    {
        space temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
    space operator--()
    {
        space temp;
        temp.real = real--;
        temp.img = img--;
        return temp;
    }
};
int main()
{
    space s1, s2, s3, s4, s5, s6, s7, s8;
    s1 = space(10, 20);
    s2 = space(5);
    s3 = s1 + s2;
    s4 = s1 - s2;
    s5 = s1 * s2;
    s6 = s1 / s2;
    
    
    cout << "Main numbers: ";
    s1.display();
    s2.display();
    cout << "Addition: ";
    s3.display();
    cout << "Substuction: ";
    s4.display();
    cout << "Multiplication: ";
    s5.display();
    cout << "Division: ";
    s6.display();
    cout<<"After Increment: ";
    s7 = ++s1;
    s7.display();
     cout<<"After Decrement: ";
     s8 = ++s1;
    s8.display();
}