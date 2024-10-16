#include<bits//stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    for(int i=0;i<tst;i++)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int add=0;
        int count=0;
        for(int j=0;j<n;j++)
        {
            if((str[j]-'0')!=0)
            {
                count++;
            }
            add=add+(str[j]-'0');
        }
        if((str[n-1]-'0')==0)
        cout<<add+count<<endl;
        else
        cout<<add+count-1<<endl;
    }
}