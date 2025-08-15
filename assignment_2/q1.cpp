#include <iostream>
using namespace std;

int search(int val, int arr[], int n)
{

    int lower = 0;
    int upper = n - 1;
    int mid;

    while (lower <= upper)
    {
        mid = (lower + upper) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }

        else if (arr[mid] > val)
        {
            upper = mid - 1;
        }
        else if (arr[mid] < val)
        {
            lower = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 8, 9, 12, 15, 17, 33, 47, 54};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter Value to be searched: ";
    cin >> target;
    int idx = search(target, arr, sz);
    if (idx == -1)
    {
        cout << "Target not found";
    }
    else
    {
        cout << "Target found at: " << idx;
    }

    return 0;
}
