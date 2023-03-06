#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
void PrintHeader()
{
  for (int i = 1; i <= 10; i++)
  {
    cout << "\t" << i;
  }
  cout << "\n--------------------------------------------------------------------------------" << endl;
}
string PrintColum(int i)
{
  if (i < 10)
    return "   |";
  else
    return "  |";
}

void PrintMultiplication()
{
  PrintHeader();
  for (int i = 1; i <= 10; i++)
  {
    cout << " " << i << PrintColum(i) << "\t";
    for (int j = 1; j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  cout << "Multiplication table from 1 to 10 !! " << endl;

  PrintMultiplication();
  //// ************************************
  cout << "*************************" << endl;
  return 0;
}