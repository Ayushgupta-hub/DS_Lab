#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a string: ";
    cin >> str;
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "Reversed str: " << str;

    return 0;
}