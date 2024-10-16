#include <iostream>
using namespace std;
class Shape
{
protected:
   double length1;
   double length2;

public:
   void get_data()
   {
      cout << "Enter the first dimension: ";
      cin >> length1;
      cout << "Enter the second dimension: ";
      cin >> length2;
   }

   virtual void display_area()
   {
      cout << "Area: " << length1 * length2 << endl;
   }
};

class Triangle : public Shape
{
public:
   void display_area() override
   {
      double area = 0.5 * length1 * length2;
      cout << "Area of Triangle: " << area << endl;
   }
};

class Rectangle : public Shape
{
public:
   void display_area() override
   {
      double area = length1 * length2;
      cout << "Area of Rectangle: " << area << endl;
   }
};

int main()
{
   Shape *shapePtr;
   char choice;

   do
   {
      cout << "Choose a shape (T for Triangle, R for Rectangle): ";
      cin >> choice;

      if (choice == 'T' || choice == 't')
      {
         shapePtr = new Triangle;
      }
      else if (choice == 'R' || choice == 'r')
      {
         shapePtr = new Rectangle;
      }
      else
      {
         cout << "Invalid choice. Try again." << endl;
         continue;
      }

      shapePtr->get_data();
      shapePtr->display_area();

      delete shapePtr;

      cout << "Do you want to calculate the area of another shape? (Y/N): ";
      cin >> choice;

   } while (choice == 'Y' || choice == 'y');

   return 0;
}
