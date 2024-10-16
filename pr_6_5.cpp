#include <iostream>
#include <math.h>
using namespace std;

class Prime
{
    int num;

public:
    Prime(int n)
    {
        num = n;
    }
    bool isPrime()
    { // Function to check if the number is prime
        if (num <= 1)
        {
            return false;
        }

        // Check for divisibility from 2 to the square root of the number
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    Prime checker(number); // Create an instance of the PrimeChecker class

    if (checker.isPrime()) // Check if the number is prime and display the result
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
