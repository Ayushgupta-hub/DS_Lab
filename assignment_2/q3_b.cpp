#include <iostream>
using namespace std;

int search(int arr[], int n)
{
    int l = 0;
    int r = n - 1;
    int missing = -1;
    int mid = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (mid + 1 == arr[mid])

        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    if (l >= n)
    {
        return -1;
    }
    else
    {
        return l + 1;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = search(arr, n);
    if (missing == -1)
    {
        cout << "No missing element" << endl;
    }
    else
    {
        cout << "Missing number is: " << missing << endl;
    }

    return 0;
}