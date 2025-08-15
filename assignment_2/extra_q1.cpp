#include <iostream>
using namespace std;
int countPairs(int arr[], int k, int n)
{

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[j] - arr[i]) == k)
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
    int k;
    cout << "Enter a number: ";
    cin >> k;
    int output = countPairs(arr, k, n);
    cout << "number of pairs are: " << output << endl;

    return 0;
}