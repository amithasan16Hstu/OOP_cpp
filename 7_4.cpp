#include <iostream>
using namespace std;
class Compare
{
   string s;

public:
   Compare(string a)
   {
      s = a;
   }
   bool operator==(Compare other)
   {
      if (s == other.s)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
};
int main()
{
   string s1,s2;
   cout << "Enter your string 1: ";
   cin >> s1;
   cout << "Enter your string 2: ";
   cin>>s2;
   Compare st(s1);
   Compare st2(s2);
   if (st2 == Compare(s1))
   {
      cout << "They are Same" << endl;
   }
   else
   {
      cout << "They are not Same" << endl;
   }
}