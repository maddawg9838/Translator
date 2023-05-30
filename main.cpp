#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void ToString();
void ToASCII();

int main()
{
  string translation;
  
  cout << "Do you want to convert to a string or to ACII?" << endl;
  cin >> translation;
  
  if (translation == "string")
  {
    ToString();
  }
  else if (translation == "ASCII")
  {
    ToASCII();
  }
  else
  {
    cout << "Do you want to convert to a string or to ACII?" << endl;
    cin >> translation;
  }
}

void ToString()
{
  string message, newMessage;
  
  cout << "What is your message?" << endl;
  getline(cin, message);
  
  newMessage = to_string(message);
  
  cout << "Your message: " << message << " in ASCII is the following: " << newMessage;  
}

void ToASCII()
{
  string message, newMessage;
  
  cout << "What is your message?" << endl;
  getline(cin, message);
  
  newMessage = stoi(message);
  
  cout << "Your message: " << message << " in ASCII is the following: " << newMessage;  
}

