#include <iostream>
using namespace std;
class item
{
    int num1, num2;

public:
    void getData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << num1 << " " << num2 << endl;
    }
};
int main()
{
    item x;
    item *obj_ptr;
    obj_ptr = &x;
    obj_ptr->getData(10, 20);
    obj_ptr->display();
}