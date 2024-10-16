#include <iostream>
using namespace std;
class MyClass
{
private:
   int data;

public:
   MyClass(int val) : data(val) {}

   // Getter function to access the private data
   int getData() 
   {
      return data;
   }

   // Setter function to modify the private data
   void setData(int val)
   {
      data = val;
   }

   // Function to swap data values using pointers
   static void swapData(MyClass *obj1, MyClass *obj2)
   {
      if (obj1 != nullptr && obj2 != nullptr)
      {
         int temp = obj1->data;
         obj1->data = obj2->data;
         obj2->data = temp;
      }
   }
};

int main()
{
   MyClass obj1(5);
   MyClass obj2(10);

   cout << "Before swapping:" << endl;
   cout << "obj1 data: " << obj1.getData() << endl;
   cout << "obj2 data: " << obj2.getData() << endl;

   // Swap the data values of obj1 and obj2 using pointers
   MyClass::swapData(&obj1, &obj2);

   cout << "After swapping:" << endl;
   cout << "obj1 data: " << obj1.getData() << endl;
   cout << "obj2 data: " << obj2.getData() << endl;

   return 0;
}
