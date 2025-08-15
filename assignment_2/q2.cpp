#include <iostream>
using namespace std;
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < sz - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}