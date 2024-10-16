#include <iostream>
using namespace std;

class DB; //  declaration of class DB
class DM
{
private:
   int meters;
   int centimeters;

public:
   // Constructor
   DM(int m = 0, int cm = 0)
   {
      meters = m;
      centimeters = cm;
   }

   friend DM add(DM &dm, DB &db); // Friend function to add DM with DB

   void display()
   {
      // Display function
      cout << "Distance: " << meters << "m " << centimeters << "cm" << endl;
   }
};

class DB
{
   int feet;
   int inches;

public:
   // Constructor
   DB(int ft = 0, int in = 0)
   {
      feet = ft;
      inches = in;
   }

   // Friend function to add DM with DB
   friend DM add(DM &dm, DB &db);

   // Display function
   void display()
   {
      cout << "Distance: " << feet << "ft " << inches << "in" << endl;
   }
};

// Friend function to add DM with DB
DM add(DM &dm, DB &db)
{
   // Convert DB to DM
   int totalCentimeters = (db.feet * 12 + db.inches) * 2.54;
   int meters = totalCentimeters / 100;
   int centimeters = totalCentimeters % 100;

   // Add DM with DM
   int totalMeters = dm.meters + meters;
   int totalCentimetersFinal = dm.centimeters + centimeters;

   // Adjust values if centimeters exceed 100
   if (totalCentimetersFinal >= 100)
   {
      totalMeters += totalCentimetersFinal / 100;
      totalCentimetersFinal = totalCentimetersFinal % 100;
   }

   // Create and return the result as DM object
   return DM(totalMeters, totalCentimetersFinal);
}

int main()
{
   // Reading values for DM object
   int dmMeters, dmCentimeters;
   cout << "Enter distance in meters: ";
   cin >> dmMeters;
   cout << "Enter distance in centimeters: ";
   cin >> dmCentimeters;
   DM dm(dmMeters, dmCentimeters);

   // Reading values for DB object
   int dbFeet, dbInches;
   cout << "Enter distance in feet: ";
   cin >> dbFeet;
   cout << "Enter distance in inches: ";
   cin >> dbInches;
   DB db(dbFeet, dbInches);

   // Adding DM with DB using the friend function
   DM result = add(dm, db);

   // Displaying the result
   result.display();

   return 0;
}