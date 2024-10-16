#include <iostream>
using namespace std;
void mysterySeries(int n, int limit)
{
   if (n <= limit)
   {
      if (n % 4 == 1)
      {
         cout << n + 4 << " ";
      }
      else if (n % 4 == 2)
      {
         cout << n - 1 << " ";
      }
      else if (n % 4 == 3)
      {
         cout << n + 1 << " ";
      }
      else
      {
         cout << n - 3 << " ";
      }

      mysterySeries(n + 1, limit);
   }
}

int main()
{
   int limit = 50;
   cout << "The series are: ";
   mysterySeries(1, limit);
   cout << endl;
   return 0;
}
