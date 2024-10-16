#include <iostream>
using namespace std;
class SortAlgorithm
{
public:
   virtual void sort(int arr[], int n) = 0;
};

class DescendingSort : public SortAlgorithm
{
public:
   void sort(int arr[], int n) override
   {
      for (int i = 0; i < n - 1; i++)
      {
         for (int j = 0; j < n - i - 1; j++)
         {
            if (arr[j] < arr[j + 1])
            {
               swap(arr[j], arr[j + 1]);
            }
         }
      }
   }
};

class AscendingSort : public SortAlgorithm
{
public:
   void sort(int arr[], int n) override
   {
      for (int i = 0; i < n - 1; i++)
      {
         for (int j = 0; j < n - i - 1; j++)
         {
            if (arr[j] > arr[j + 1])
            {
               swap(arr[j], arr[j + 1]);
            }
         }
      }
   }
};

int main()
{
   int n;
   cout<<"Enter Number of Array elements:";
   cin>>n;
   int arr[n];
   cout<<n<<" "<<"Number of elements: ";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   cout << "Main Array: ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   SortAlgorithm *descendingSort = new DescendingSort();
   descendingSort->sort(arr, n);

   cout << "\nDescending Order: ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   SortAlgorithm *ascendingSort = new AscendingSort();
   ascendingSort->sort(arr, n);

   cout << "Ascending Order: ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   delete descendingSort;
   delete ascendingSort;
   return 0;
}