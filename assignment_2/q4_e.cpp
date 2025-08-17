#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    cout << "Lowercase string: " << str;

    return 0;
}
