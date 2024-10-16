#include <iostream>
using namespace std;
// Function pointer type for the factorial function
typedef unsigned long long (*FactorialFunction)(int);

// Recursive factorial function
unsigned long long factorial(int n)
{
   if (n == 0 || n == 1)
   {
      return 1;
   }
   return n * factorial(n - 1);
}

int main()
{
   int n;

   // Pointer to the factorial function
   FactorialFunction factorialPtr = factorial;

   cout << "Enter a non-negative integer: ";
   cin >> n;

   if (n < 0)
   {
      cout << "Factorial is not defined for negative numbers." << endl;
   }
   else
   {
      unsigned long long result = factorialPtr(n);
      cout << "Factorial of " << n << " is: " << result << endl;
   }

   return 0;
}
