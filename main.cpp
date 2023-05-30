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
  int size;
  
  cout << "How long is your message?" << endl;
  cin >> size;

    int message[size];
    char newMessage[size];

  cout << "What is your message?" << endl;

for (int i = 0; i < size; i++)
  {
    cin >> message[i];
    newMessage[i] = char(message[i]);
  }
  
  cout << "Your message: ";
  for (int i = 0; i < size; i++)
  {
    cout << message[i];
  }
    cout << " in ASCII is the following: ";
     for (int i = 0; i < size; i++)
  {
    cout << newMessage[i];
  }  
}

void ToASCII()
{
  string message, newMessage;
  
  cout << "What is your message?" << endl;
  getline(cin, message);
  
  newMessage = stoi(message);
  
  cout << "Your message: " << message << " in ASCII is the following: " << newMessage;  
}
