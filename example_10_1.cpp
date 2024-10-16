#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"Enter Text\n";
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c); //eta na dile text display koerbena
        count++;
        cin.get(c);// eta na dile infinity
    }
    cout<<" "<<count<<endl;
}