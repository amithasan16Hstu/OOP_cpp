#include <iostream>
using namespace std;
class person
{
protected:
   string name;
   int code;

public:
   void getData(string s, int a)
   {
      name = s;
      code = a;
   }
   void display()
   {
      cout << name << " " << code << endl;
   }
};
class account : virtual public person
{
protected:
   float pay;

public:
   void getData(float b)
   {
      pay = b;
   }
   void diplay1()
   {
      cout << pay << endl;
   }
};
class admin : virtual public person
{
protected:
   int experience;

public:
   void getData(int c)
   {
      experience = c;
   }
   void diplay1()
   {
      cout << experience << endl;
   }
};
class master : public account, public admin
{
   public:
   void display2()
   {
      cout << name << " " << code << " " << pay << endl;
   }
};
int main()
{
   master s1;
   s1.display2();
}
