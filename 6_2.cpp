#include <iostream>
#include <fstream>
using namespace std;

class String
{
   string s;

public:
   String(string a)
   {
      s = a;
   }
   String()
   {
      s = "";
   }
   void concate(String b, String c)
   {
      s = b.s + c.s;
   }
   string show()
   {
      return s;
   }
};

int main()
{
   ifstream inputFile("in.txt");   // Open the input file
   ofstream outputFile("out.txt"); // Open the output file

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

   string s1, s2;
   while (inputFile >> s1 >> s2)
   {
      String st1(s1), st2(s2), s3;
      s3.concate(st1, st2);
      outputFile << "Concatenated String: " << s3.show();
   }

   // Close the files
   inputFile.close();
   outputFile.close();

   cout << "File processing completed." << endl;

   return 0;
}
