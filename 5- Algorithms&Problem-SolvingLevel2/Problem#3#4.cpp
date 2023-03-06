#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return number == sum;
}
void PrintResult(int number)
{
    if (isPerfectNumber(number))
    {
        cout << number << " is a perfect number"
             << "\n";
        int sum = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                cout << i << endl;
                sum += i;
            }
        }
        cout << "-------------------------------" << endl;
        cout << sum << endl;
    }
    else
    {
        cout << number << " is not a perfect number"
             << "\n";
    }
}

// // ************************************
int main()
{
    cout << "*************************" << endl;
    //// ************************************

    PrintResult(ReadPositiveNumber("Please enter a positive number ? "));
    cout << "*************************" << endl;
    return 0;
}