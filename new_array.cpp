#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5]; // malloc of c
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
    }
    delete[] p; // realloc of c
}