#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>
using namespace std;
// // ************************************
string ReadText(string Message)
{
  string Text;
  cout << Message << endl;
  getline(cin, Text);
  return Text;
}
string EncryptText(string Text, short EncryptionKey)
{
  for (int i = 0; i <= Text.length(); i++)
  {
    Text[i] = char((int)Text[i] + EncryptionKey);
  }
  return Text;
}
string DecryptText(string Text, short EncryptionKey)
{
  for (int i = 0; i <= Text.length(); i++)
  {
    Text[i] = char((int)Text[i] - EncryptionKey);
  }
  return Text;
}
// // ************************************
// // ************************************
int main()
{
  cout << "*************************" << endl;
  //// ************************************
  const short EncryptionKey = 2; // this is the key.
  string Text = ReadText("Please enter a Text?");
  string TextAfterEncryption = EncryptText(Text, EncryptionKey);
  string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);
  cout << "\nText Before Encryption : ";
  cout << Text << endl;
  cout << "Text After Encryption  : ";
  cout << TextAfterEncryption << endl;
  cout << "Text After Decryption  : ";
  cout << TextAfterDecryption << endl;

  cout << "*************************" << endl;
  return 0;
}