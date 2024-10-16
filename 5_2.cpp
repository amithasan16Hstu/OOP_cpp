#include <iostream>
using namespace std;
class VECTOR
{
   int x, y, z;

public:
   void create()
   {
      cout << "Enter the value of i: ";
      cin >> x;
      cout << "Enter the value of j: ";
      cin >> y;
      cout << "Enter the value of k: ";
      cin >> z;
   }
   void modify()
   {
      cout << "If you want to modify the value(i/j/k): ";
      int a;
      while (1)
      {
         char s;
         cin >> s;
         if (s == '0')
         {
            cout << "Not interested for Modify" << endl;
            break;
         }

         if (s == 'i')
         {
            cout << "Enter the modify value of i: ";
            cin >> a;
            x = a;
         }
         else if (s == 'j')
         {
            cout << "Enter the modify value of j: ";
            cin >> a;
            y = a;
         }
         else if (s == 'k')
         {

            cout << "Enter the modify value of k: ";
            cin >> a;
            z = a;
         }
      }
   }
   void multiply(int b)
   {
      cout << "What value do you want for multiply: ";
      x = b * x;
      y = b * y;
      z = b * z;
   }
   void display()
   {
      cout << x << "i"
           << " " << y << "j"
           << " " << z << "k" << endl;
   }
};
int main()
{
   VECTOR n;
   int d, e;
   n.create();
   // cout << "Enter the value of Modify: ";
   // cin >> d;
   n.modify();
   cout << "Enter the value of Multiply: ";
   cin >> e;
   n.multiply(e);
   n.display();
}