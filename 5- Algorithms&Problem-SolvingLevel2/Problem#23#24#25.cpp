#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
int ReadPositiveNumber(int From, int To)
{
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
void ReadArray(int arr[100], int &arrLength)
{
  cout << "Enter number of elements:\n";
  cin >> arrLength;

  for (int i = 0; i < arrLength; i++)
    arr[i] = ReadPositiveNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << " " << arr[i] << " ";
}

int MaxNumberInArray(int arr[100], int arrLength)
{
  int max = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}
int MinNumberInArray(int arr[100], int arrLength)
{
  int min = 0;
    min = arr[0];
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] <= min)
    {
      min = arr[i];
    }
  }
  return min;
}
// // ************************************
// // ************************************
int main()
{
  srand((unsigned)time(NULL));
  cout << "*************************" << endl;
  //// ************************************
  int arr[100], arrLength;
  ReadArray(arr, arrLength);

  cout << "\nArray Element(s) " << endl;
  PrintArray(arr, arrLength);
  cout << "\n\nMax Number In Array Elements" << endl;
  cout << MaxNumberInArray(arr, arrLength)<< endl;
  cout << "\nMin Number In Array Elements" << endl;
  cout << MinNumberInArray(arr, arrLength)<< endl;
  cout << "*************************" << endl;
  return 0;
}