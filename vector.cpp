#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        cout<<"Before push"<<" "<<a.size()<<"\n";// size function diye vector a size dekha jai
        a.push_back(i);// new element add korte hole push_back function
        cout<<"After push"<<" "<<a.size()<<"\n";
        
    }
    cout<<"\n";
    cout<<"___________Before Delete___________"<<"\n";
    a.insert(a.begin()+2,100);// first er dike or jekono position a element add korte chai tokhn insert function use korte hbe.    a.insert(a.begin()+position,joto add korte chai)
    
     for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"____________After Delete___________"<<"\n";
    a.erase(a.begin()+3);
    for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"____________After Delete Last Element___________"<<"\n";
    a.pop_back();// For delete last element
    for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
     cout<<"\n";
    cout<<"____________After Delete Last some Elements by resize___________"<<"\n";
    a.resize(7); // Array size abr resize kora 10 er place a 7 amn
    for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
}