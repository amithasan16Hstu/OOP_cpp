#include <iostream>
using namespace std;
class DB;
class DM
{
   int met, cm;

public:
   DM(int m, int c)
   {
      met = m;
      cm = c;
   }
   DM friend add(DM dm, DB db);
   void display()
   {
      cout << met << " m " << cm << " cm " << endl;
   }
};
class DB
{
   int feet, inch;

public:
   DB(int f, int i)
   {
      feet = f;
      inch = i;
   }
   DM friend add(DM dm, DB db);
   void display()
   {
      cout << feet << " feet " << inch << " inchs " << endl;
   }
};
DM add(DM dm, DB db)
{
   int centimers = (db.feet * 12 + db.inch) * 2.54;
   int meters = centimers / 100;
   int totalcentimeters = centimers % 100;
   int totalmeters = dm.met + meters;
   int finalcentimeters = dm.cm + totalcentimeters;
   if (finalcentimeters >= 100)
   {
      totalmeters += finalcentimeters / 100;
      finalcentimeters = finalcentimeters % 100;
   }
   return DM(totalmeters, finalcentimeters);
}
int main()
{
   int a, b, c, d;
   cout << "Enter the value in meter: ";
   cin >> a;
   cout << "Enter the value in centimeter: ";
   cin >> b;
   DM x(a, b);
   cout << "Enter the value in Feet: ";
   cin >> c;
   cout << "Enter the value in Inchs: ";
   cin >> d;
   DB y(c, d);
   DM result = add(x, y);
   x.display();
   y.display();
   cout << "FINAL RESULTS: " << endl;
   result.display();
}