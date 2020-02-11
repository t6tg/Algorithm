#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

void prefix(const char s1[], const char s2[], char commonPrefix[])
{
    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] == s1[i])
        {
            cout << s1;
        }
    }
}

int main()
{
    char string1[256];
    char string2[256];
    char Prefix[256];
    cout << "Enter a string s1: ";
    cin.getline(string1, 256);
    cout << "Enter a string s2: ";
    cin.getline(string2, 256);
    prefix(string1, string2, Prefix);

    return 0;
}
