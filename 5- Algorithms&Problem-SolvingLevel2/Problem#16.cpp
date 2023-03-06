#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
void PrintWordsFromAAAtoZZZ()
{
  cout << "\n";
  string word = "";
  for (int i = 65; i <= 90; i++)
  {
    for (int j = 65; j <= 90; j++)
    {
      for (int k = 65; k <= 90; k++)
      {
        word = word + char(i);
        word = word + char(j);
        word = word + char(k);
        cout<<word<<endl;
        word="";
      }
    }
  }

  cout << "\n";
}
// // ************************************
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  PrintWordsFromAAAtoZZZ();
  cout << "*************************" << endl;
  return 0;
}