#include <iostream>
using namespace std;

int findValue(int arr[][3], int m, int n, int size, int i, int j)
{
    for (int k = 1; k <= size; k++)
    {
        if (arr[k][0] == i && arr[k][1] == j)
        {

            return arr[k][2];
        }
    }
    return 0;
}

int main()
{
    int m, n, size;
    cout << "Enter no. of rows col and nonZero numbers: ";
    cin >> m >> n >> size;

    int arr[size + 1][3];
    cout << "Enter row col and number: " << endl;
    arr[0][0] = m;
    arr[0][1] = n;
    arr[0][2] = size;

    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    cout << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << endl;
    }
    cout << "The input matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val = findValue(arr, m, n, size, i, j);
            cout << val << " ";
        }
        cout << endl;
    }
    cout<< "Transposed matrix: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val = findValue(arr, m, n, size, j, i);
            cout << val << " ";
        }
        cout << endl;
    }


    return 0;
}