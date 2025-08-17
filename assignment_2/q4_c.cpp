#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    cout << "String without vowel: " << str;

    return 0;
}