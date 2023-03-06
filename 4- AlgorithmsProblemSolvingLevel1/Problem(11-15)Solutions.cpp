#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
enum enPassFail
{
    pass = 1,
    fail = 0
};
void readMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "please enter mark 1 " << endl;
    cin >> mark1;
    cout << "please enter mark1 2 " << endl;
    cin >> mark2;
    cout << "please enter mark 3" << endl;
    cin >> mark3;
    cout << "mark1 = " << mark1 << " mark2 = " << mark2 << " mark3 = " << mark3 << endl;
}
int sumMarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

int averageMarks(int mark1, int mark2, int mark3)
{
    return (float)sumMarks(mark1, mark2, mark3) / 3;
}
enPassFail checkAverage(float average)
{
    if (average >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}
void printMarksResult(float average)
{
    cout << "Your  average   is " << average << endl;
    if (checkAverage(average) == enPassFail::pass)
        cout << "you passed" << endl;
    else
        cout << "you Failed" << endl;
}
// // ************************************
int maxOfMarks(int mark1, int mark2, int mark3)
{
    if (mark1 > mark2)
        return mark1;
    else if (mark2 > mark3)
        return mark2;
    else
        return mark3;
}

void printMaxMark(int maxMark)
{
    cout << "Th max mark is = " << maxMark << endl;
}
// // ************************************
void Swap(int &mark1, int &mark2, int &mark3)
{
    int temp;
    temp = mark1;
    mark1 = mark2;
    mark2 = mark3;
    mark3 = temp;
}
void PrintSwap(int mark1, int mark2, int mark3)
{
    cout << "*************************" << endl;
    cout << "Swap: mark1 = " << mark1 << " mark2 = " << mark2 << " mark3 = " << mark3 << endl;
}
int main()
{
    cout << "*************************" << endl;
    cout << "" << endl;
    // // ************************************

    int mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    Swap(mark1, mark2, mark3);
    PrintSwap(mark1, mark2, mark3);

    // ************************************
    printMaxMark(maxOfMarks(mark1, mark2, mark3));
    // ************************************
    printMarksResult(averageMarks(mark1, mark2, mark3));
    // ************************************
    // ************************************

    cout << "*************************" << endl;
    return 0;
}