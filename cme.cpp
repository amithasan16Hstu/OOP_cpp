#include <bits//stdc++.h>
using namespace std;
int main()
{
    long long queue;
    cin >> queue;
    for (int i = 0; i < queue; i++)
    {
        long long n;
        cin >> n;
        if (n == 2)
            cout << n << endl;
        else
        {
            if (n % 2 == 0)
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
    }
}