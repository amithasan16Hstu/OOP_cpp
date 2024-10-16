#include<iostream>
using namespace std;
void square(int *snum)
  {
   cout<<"Square of 10 is ";
   *snum *= *snum;
  }
int main()
{
  
int num=10;square(&num);
cout<<num;

}