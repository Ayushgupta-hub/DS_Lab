#include <iostream>
using namespace std;

int inversion(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
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
    int count = inversion(arr, n);
    cout << "Number of inversions are: " << count << endl;

    return 0;
}