#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
float readCircumFerence()
{
  int circumFerence;
  cout << "please enter CircumFerence  " << endl;
  cin >> circumFerence;
  return circumFerence;
}

float CircleAreaCalculate(float circumFerence)
{
  const float PI = 3.14159;
  float Area = pow(circumFerence, 2) / (4 * PI);
  return Area;
}
void PrintCircleArea(float Area)
{
  cout << "Circle Area = " << Area << endl;
}
// // ************************************
int readNumber()
{
  int loopFrom;
  cout << "please enter Number to loop through  " << endl;
  cin >> loopFrom;
  return loopFrom;
}
void PrintNUsingWhile(int N)
{
  int countr = 0;
  cout << "Range printed using While !!" << endl;
  while (countr < N)
  {
    countr++;
    cout << "countr = " << countr << endl;
  }
}
void PrintNUsingDoWhile(int N)
{
  int countr = 0;
  cout << "Range printed using Do While !!" << endl;
  do
  {
    countr++;
    cout << "countr = " << countr << endl;
  } while (countr < N);
}

void PrintNUsingFor(int N)
{
  cout << "Range printed using For !!" << endl;
  for (int countr = 1; countr <= N; countr++)
  {
    cout << "countr = " << countr << endl;
  }
}
void PrintNUsingWhileFrom1(int N)
{
  int countr = N + 1;
  cout << "Range printed using While !!" << endl;
  while (countr > 1)
  {
    countr--;
    cout << "countr = " << countr << endl;
  }
}
void PrintNUsingDoWhileFrom1(int N)
{
  cout << "Range printed using Do While !!" << endl;
  int countr = N + 1;
  do
  {
    countr--;
    cout << "countr = " << countr << endl;
  } while (countr > 1);
}
void PrintNUsingForFrom1(int N)
{
  cout << "Range printed using For !!" << endl;
  for (int countr = N; countr >= 1; countr--)
  {
    cout << "countr = " << countr << endl;
  }
}
enum enOddEven
{
  Odd = 1,
  Even = 2
};
enOddEven CheckOddEven(int number)
{
  if (number % 2 != 0)
    return enOddEven::Odd;
  else
    return enOddEven::Even;
}

int SumOddUsingFor(int N)
{
  int sum = 0;
  for (int countr = 1; countr <= N; countr++)
  {
    if (CheckOddEven(countr) == enOddEven::Odd)
      sum += countr;
  }
  return sum;
}

int SumEvenUsingWhile(int number)
{
  int countr = 0;
  int sum = 0;
  while (countr < number)
  {
    countr++;
    if (CheckOddEven(countr) == enOddEven::Even)
      sum += countr;
  }
  return sum;
}
// // ************************************
int ReadPositiveNumber(string message)
{
  int number;
  do
  {
    cout << message << endl;
    cin >> number;
  } while (number < 0);
  return number;
}
int Factorial(int number)
{
  int F = 1;
  for (int i = number; i >= 1; i--)
  {
    F = F * i;
  }
  return F;
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  
  int N = readNumber();
  cout <<" Factorial"<< Factorial( ReadPositiveNumber("Enter Positive Number")) << endl;

  // cout << "Odd Using For"<< SumOddUsingFor(N) << endl;
  cout << "Even Using While " << SumEvenUsingWhile(N) << endl;
  // ************************************
  PrintNUsingWhileFrom1(N);
  PrintNUsingDoWhileFrom1(N);
  PrintNUsingForFrom1(N);
  // // ************************************
  PrintNUsingWhile(N);
  PrintNUsingDoWhile(N);
  PrintNUsingFor(N);
  // ************************************
  PrintCircleArea(CircleAreaCalculate(readCircumFerence()));
  //// ************************************
  //// ************************************

  cout
      << "*************************" << endl;
  return 0;
}