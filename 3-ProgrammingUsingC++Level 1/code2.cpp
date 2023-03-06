#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stInfo
{
    string name;
    int phone;
};
void readInfo(stInfo &info)
{
    cout << "name  person" << endl;
    cin >> info.name;
    cout << "phone " << endl;
    cin >> info.phone;
}
void printInfo(stInfo info)
{
    cout << "name " << info.name << endl;
    cout << "phone " << info.phone << endl;
}
void readPersonInfo(stInfo persons[2])
{
    readInfo(persons[0]);
    readInfo(persons[1]);
}
void printPersonInfo(stInfo persons[2])
{
    cout << "person1*************************" << endl;
    printInfo(persons[0]);
    cout << "person2*************************" << endl;
    printInfo(persons[1]);
    cout << "*************************" << endl;
}

void readArrayData(int x[3])
{
    cout << "Enter Grade 1  " << endl;
    cin >> x[0];
    cout << "Enter Grade 2  " << endl;
    cin >> x[1];
    cout << "Enter Grade 3  " << endl;
    cin >> x[2];
}
float printArrayData(int x[3])
{
    return (x[0] + x[1] + x[2]) / 3;
}
int main()
{
    cout << "*************************" << endl;
    int x[3];
    readArrayData(x);
    stInfo persons[2];
    readPersonInfo(persons);
    printPersonInfo(persons);
    cout << "Grade 1 of is  " << x[0] << endl;
    cout << "Grade 2 of is  " << x[1] << endl;
    cout << "Grade 3 of  is " << x[2] << endl;
    cout << "*************************" << endl;
    cout << "Average of Grades " << printArrayData(x) << endl;
    cout << "*************************" << endl;
    return 0;
}