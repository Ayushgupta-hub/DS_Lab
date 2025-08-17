#include <iostream>
using namespace std;

int main()
{
    char st1[100], st2[100];

    cout << "Enter string 1: ";
    cin >> st1;
    cout << "Enter string 2: ";
    cin >> st2;

    int n1 = 0, n2 = 0;

    // find length of st1
    for (int i = 0; st1[i] != '\0'; i++)
    {
        n1++;
    }

    // find length of st2
    for (int j = 0; st2[j] != '\0'; j++)
    {
        n2++;
    }

    char result[200]; // array to hold concatenated string

    // copy st1 into result
    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        result[k++] = st1[i];
    }

    // copy st2 into result
    for (int j = 0; j < n2; j++)
    {
        result[k++] = st2[j];
    }

    // null terminate
    result[k] = '\0';

    cout << "Concatenated string: " << result << endl;

    return 0;
}
