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
int CountDigitFrequency(short digitCheck, int number)
{
    int Frequency = 0, Remainder = 0;
    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        if (digitCheck == Remainder)
        {
            Frequency++;
        }
    }
    return Frequency;
}
// // 999999999999***********************************
void PrintAllDigitFrequency(int number)
{
    cout << "*************************" << endl;
    for (int i = 0; i < 10; i++)
    {
        short Frequency = 0;
        Frequency = CountDigitFrequency(i, number);
        if (Frequency > 0)
        {
            cout << "Digit " << i << " Frequency is " << Frequency << " time(s)" << endl;
        }
    }
}

// // ************************************
int main()
{
    cout << "*************************" << endl;
    //// 8888888************************************
    int mainNumber = ReadPositiveNumber("Please enter a positive number ? ");
    short digitCheck = ReadPositiveNumber("Please enter one digit to check ?");
    cout << "Digit " << digitCheck << " Frequency is " << CountDigitFrequency(digitCheck, mainNumber) << " Time(s)" << endl;

    //// 9999999************************************
    PrintAllDigitFrequency(mainNumber);
    cout << "*************************" << endl;
    return 0;
}