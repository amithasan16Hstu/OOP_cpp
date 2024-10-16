#include <iostream>
#include <fstream>
using namespace std;

class Prime
{
   int num;

public:
   Prime(int a)
   {
      num = a;
   }
   bool operator==(Prime obj)
   {
      if (num <= 1)
      {
         return false;
      }
      else if (num <= 3)
      {
         return true;
      }
      else if (num % 2 == 0 || num % 3 == 0)
      {
         return false;
      }
      for (int i = 5; i * i <= num; i += 6)
         if (num % i == 0 || num % (i + 2) == 0)
            return false;
      return true;
   }
};

int main()
{
   ifstream inputFile("input.txt");   // Open the input file
   ofstream outputFile("output.txt"); // Open the output file

   if (!inputFile.is_open())
   {
      cout << "Failed to open the input file." << endl;
      return 1;
   }

   if (!outputFile.is_open())
   {
      cout << "Failed to open the output file." << endl;
      return 1;
   }

   int n;
   //cout<<"Enter a Number: ";
   
   while (inputFile >> n)
   {
      //cin>>n;
      Prime s(n);
      if (s == Prime(n))
      {
         outputFile << n << " is PRIME" << endl;
      }
      else
      {
         outputFile << n << " is NOT PRIME" << endl;
      }
   }

   // Close the files
   inputFile.close();
   outputFile.close();

   cout << "File processing completed." << endl;

   return 0;
}
