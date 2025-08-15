#include <iostream>
using namespace std;

int distinct(int arr[], int n)
{
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag)
            break;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    return count;
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
    int count = distinct(arr, n);
    cout << "Number of distinct numbers are: " << count << endl;

    return 0;
}