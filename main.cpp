#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void ToString();
void ToASCII();

int main()
{
    string translation;

    cout << "Do you want to convert to a string or to ASCII?" << endl;
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
        cout << "Do you want to convert to a string or to ASCII?" << endl;
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
        cout << "What is the " << (i + 1) << " number in the message: ";
        cin >> message[i];
        newMessage[i] = char(message[i]);
    }

    cout << "Your message: ";
    for (int i = 0; i < size; i++)
    {
        cout << message[i] << " ";
    }

    cout << " as a string is the following: ";
    for (int i = 0; i < size; i++)
    {
        cout << newMessage[i];
    }
}

void ToASCII()
{
    int size;

    cout << "How long is your message?" << endl;
    cin >> size;

    int newMessage[size];
    char message[size];

    cout << "What is your message?" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "What is the " << (i + 1) << " number in the message: ";
        cin >> message[i];
        newMessage[i] = int(message[i]);
    }

    cout << "Your message: ";
    for (int i = 0; i < size; i++)
    {
        cout << message[i];
    }
    cout << " in ASCII is the following: ";
    for (int i = 0; i < size; i++)
    {
        cout << newMessage[i] <<  " ";
    }
}

