#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
int ReadNumber()
{
    int number;
    cout << "please Enter a number " << endl;
    cin >> number;
    cout << "Your number is : " << number << endl;
    return number;
}
int ReadPower()
{
    int power;
    cout << endl;
    cout << "please Enter a Power " << endl;
    cin >> power;
    cout << "Your Power is : " << power << endl;
    return power;
}
int PowerOf(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int p = 1;
    for (int i = 1; i <= power; i++)
    {
        p = p * number;
    }
    return p;
}
// // ************************************
enum enOperationType
{
    add = '+',
    subtract = '-',
    multiply = '*',
    divide = '/'
};
float ReadNumberOperation(string message)
{
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}
enOperationType ReadOperationType()
{
    char OT = '+';
    cout << "Please enter operation type ?" << endl;
    cin >> OT;
    cout << " operation is " << OT << "\n";
    return (enOperationType)OT;
}
float CalculateOperation(float number1, float number2, enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::add:
        return number1 + number2;
    case enOperationType::subtract:
        return number1 - number2;
    case enOperationType::multiply:
        return number1 * number2;
    case enOperationType::divide:
        return number1 / number2;
    default:
        return number1 + number2;
    }
} //// ************************************
string ReadPINCode()
{
    string PinCode;
    cout << "Enter PIN Code" << endl;
    cin >> PinCode;
    return PinCode;
}
bool login()
{
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPINCode();
        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "Wrong PIN Code you have " << counter << " more tries" << endl;
            system("color 4F");
        }

    } while (counter >= 1 && PinCode != "1234");
    return 0;
}
// // ************************************
int main()
{
    cout << "*************************" << endl;
    //// ************************************
    if (login())
    {
        system("color 2F");
        cout << "Your account balance is " << 7500 << endl;
    }
    else
    {
        cout << "Your account is blocked " << 7500 << endl;
    }

    //// ************************************
    float number1 = ReadNumberOperation("Pease Enter number 1 ");
    float number2 = ReadNumberOperation("Pease Enter number 2 ");
    enOperationType OperationType = ReadOperationType();
    cout << "Operation " << CalculateOperation(number1, number2, OperationType) << endl;
    // ************************************
    cout << " Power Of " << PowerOf(ReadNumber(), ReadPower()) << endl;
    //// ************************************
    cout << "*************************" << endl;
    return 0;
}