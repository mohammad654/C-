#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;

void readArrayData(int arr[100], int &length)
{
    cout << "How many number do want to enter (1-100)?" << endl;
    cin >> length;
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Please enter " << i + 1 << endl;
        cin >> arr[i];
    }
}
void printArrayData(int arr[100], int length)
{
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Index  [" << i + 1 << "] " << arr[i] << endl;
    }
}
int calculateArraySum(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i <= length - 1; i++)
    {
        sum += arr[i];
    }
    return sum;
}
float calculateArrayAverage(int arr[100], int length)
{
    int average = 0;
    for (int i = 0; i <= length - 1; i++)
    {
        average += arr[i];
    }
    // return (float) calculateArraySum(arr, length)/length;
    return average / length;
}
// **********************************
struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};
void ReadInfo(strInfo &Info)
{
    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;
    cout << "Please enter LastName?\n";
    cin >> Info.LastName;
    cout << "Please enter Age?\n";
    cin >> Info.Age;
    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << "\n\n";
}

void PrintInfo(strInfo Info)
{
    cout << "\n**********************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "**********************************\n\n";
}

void ReadPersonsInfo(strInfo Persons[100], int &NumberOfPersons)
{
    cout << "How many persons?\n";
    cin >> NumberOfPersons;
    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Please Enter Person's " << i + 1 << " Info: \n";
        ReadInfo(Persons[i]);
    }
}

void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{
    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Person's " << i + 1 << " Info: \n";
        PrintInfo(Persons[i]);
    }
}
// ************************************

void cal()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "I = " << i << endl;

        cout << "*************************" << endl;

        for (int e = 1; e <= 10; e++)
        {
            cout << e << " * " << i << " = " << i * e << endl;
        }
        cout << "*************************" << endl;
    }
}
void stars1()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void number1()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void number2()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    cout << "*************************" << endl;
    int arr[100], length = 0;
    readArrayData(arr, length);
    printArrayData(arr, length);
    cout << "*************************" << endl;
    cout << "Sum = " << calculateArraySum(arr, length) << endl;
    cout << "Average = " << calculateArrayAverage(arr, length) << endl;
    // ************************************

    strInfo Persons[100];
    int NumberOfPersons = 1;
    ReadPersonsInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);
    // ************************************
    cal();
    stars1();
    number1();
    number2();
    cout << "*************************" << endl;
    return 0;
}