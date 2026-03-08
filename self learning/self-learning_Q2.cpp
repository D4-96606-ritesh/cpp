#include <iostream>
using namespace std;
inline long long factorial(int n)
{

    if(n < 0)
    {
        cout << "Factorial not defined for negative numbers\n";
        return -1;
    }

    long long result = 1;

    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}


inline long long power(int base, int exp)
{
    long long result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int num, base, exponent;

    cout << "Enter number for factorial: ";
    cin >> num;

    long long fact = factorial(num);

    cout << "\nFactorial of " << num << " = " << fact << endl;

    cout << "\nEnter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    long long pow = power(base, exponent);

    cout << "\nPower result = " << pow << endl;

    cout << "\n Program finished successfully\n";

    return 0;
}