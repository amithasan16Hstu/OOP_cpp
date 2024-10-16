#include <iostream>
using namespace std;
int main()
{
    string s1="This is Amit Hasan Sikder.";
    string s2="Faculty of CSE.";

    // cout<< s1.size()<<"\n";// Array size er jonno
    // cout<< s2.size()<<"\n";
    // cout<<s1[0]<<"\n";
    // string s3=s1+s2;
    // cout<<s3<<"\n";
    // for(int i=0;i<s1.size();i++)
    // {
    //     s1[i]=s1[i]+1;
    // }
    //s1.pop_back();// For delete last character
    s1.erase(s1.begin()+5);//start theke kon character delete korte hbe seta
    cout<<s1<<"\n";
   
}