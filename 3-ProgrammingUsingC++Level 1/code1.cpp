#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct stOwner
{
    string name;
    int phone;
};
enum Colors
{
    red,
    green,
    blue,
    yellow
};

struct Car
{
    string brand;
    string model;
    int year;
    stOwner owner;
    Colors carColor;
};

int main()
{
    cout << "C++ I promise to be the best developer ever!! \n";
    cout << "*************************" << std::endl;

    string name;
    int age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool married;

    cout << "What is name is ?" << endl;
    cin.ignore(1, '\n');
    getline(cin, name);
    cout << "How old are you ?" << endl;
    cin >> age;
    cout << "In which City do you live ?" << endl;
    cin >> city;
    cout << "In which Country do you live ?" << endl;
    cin >> country;
    cout << "How much is yor monthly Salary ?" << endl;
    cin >> monthlySalary;
    cout << "What is your Gender ?" << endl;
    cin >> gender;
    cout << "Are you married ?" << endl;
    cin >> married;
    float yearlySalary = monthlySalary * 12;
    cout << "*************************" << std::endl;
    cout << "My name is : " << name << endl;
    cout << "My Age is : " << age << endl;
    cout << "My City is : " << city << endl;
    cout << "My Country is : " << country << endl;
    cout << "My monthly Salary is : " << monthlySalary << endl;
    cout << "My yearly Salary is : " << yearlySalary << endl;
    cout << "My Gender is :" << gender << endl;
    cout << "Married " << married << endl;
    Car myCar;
    cout << "brand" << endl;
    cin >> myCar.brand;
    cout << "Owner" << endl;
    cin >> myCar.owner.name;

    cout << "*************************" << std::endl;
    myCar.carColor = Colors::red;
    cout << "My Car Brand :" << myCar.brand << endl;
    cout << "Owner Name : " << myCar.owner.name << endl;
    cout << "Enum  : " << myCar.carColor << endl;

    cout << "*************************" << std::endl;
    return 0;
}