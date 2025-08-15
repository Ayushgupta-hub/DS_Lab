#include <iostream>
using namespace std;
void duplicateZeros(int arr[], int n)
{

    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
    }
    int i = n - 1;
    int j = n + zeros - 1;
    while (j >= 0)
    {
        if (arr[i] != 0)
        {
            if (j < n)
            {
                arr[j] = arr[i];
            }
        }
        else
        {
            if (j < n)
            {
                arr[j] = 0;
            }
            j--;
            if (j < n)
            {
                arr[j] = 0;
            }
        }
        j--;
        i--;
    }
}

int main()
{
    cout << "Enter size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    duplicateZeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}