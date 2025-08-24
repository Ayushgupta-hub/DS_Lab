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
    int size2;
    cout << "Enter size of second matrix: ";
    cin >> size2;
    int brr[size2 + 1][3];
    brr[0][0] = m;
    brr[0][1] = n;
    brr[0][2] = size2;
    cout << "Enter row col and number: " << endl;
    for (int i = 1; i <= size2; i++)
    {
        cin >> brr[i][0] >> brr[i][1] >> brr[i][2];
    }
    cout << endl;

    int result[size + size2 + 1][3];
    int i = 1;
    int j = 1;
    int k = 1;

    result[0][0]=m;
    result[0][1]=n;
    


    while (i <= size && j <= size2)
    {
        if (arr[i][0] == brr[j][0])
        {
            if (arr[i][1] == brr[j][1])
            {
                result[k][0] = arr[i][0];
                result[k][1] = arr[i][1];
                result[k][2] = arr[i][2] + brr[j][2];
                k++;
                i++;
                j++;
            }
            else if (arr[i][1] < brr[j][1])
            {
                result[k][0] = arr[i][0];
                result[k][1] = arr[i][1];
                result[k][2] = arr[i][2];
                k++;
                i++;
            }
            else
            {
                result[k][0] = brr[j][0];
                result[k][1] = brr[j][1];
                result[k][2] = brr[j][2];
                k++;
                j++;
            }
        }
        else if (arr[i][0] < brr[j][0])
        {
            result[k][0] = arr[i][0];
            result[k][1] = arr[i][1];
            result[k][2] = arr[i][2];
            k++;
            i++;
        }
        else
        {
            result[k][0] = brr[j][0];
            result[k][1] = brr[j][1];
            result[k][2] = brr[j][2];
            k++;
            j++;
        }
    }

    while (i <= size)
    {
        result[k][0] = arr[i][0];
        result[k][1] = arr[i][1];
        result[k][2] = arr[i][2];
        k++;
        i++;
    }

    while (j <= size2)
    {
        result[k][0] = brr[j][0];
        result[k][1] = brr[j][1];
        result[k][2] = brr[j][2];
        k++;
        j++;
    }

    result[0][2] = k-1;

    cout << "Summation: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val = findValue(result, m, n, result[0][2], i, j);
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}