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

void transpose(int b[][3], int tb[][3])
{
    int m = b[0][0], n = b[0][1], t = b[0][2];
    tb[0][0] = n;
    tb[0][1] = m;
    tb[0][2] = t;

    if (t > 0)
    {
        int q = 1;
        for (int col = 0; col < n; col++)
        {
            for (int p = 1; p <= t; p++)
            {
                if (b[p][1] == col)
                {
                    tb[q][0] = b[p][1];
                    tb[q][1] = b[p][0];
                    tb[q][2] = b[p][2];
                    q++;
                }
            }
        }
    }
}

void multiply(int a[][3], int b[][3], int c[][3])
{
    int m = a[0][0], n = b[0][0], t1 = a[0][2], t2 = b[0][2];
    int k = 1;

    for (int i = 1; i <= t1; i++)
    {
        for (int j = 1; j <= t2; j++)
        {
            if (a[i][1] == b[j][1])
            {
                int row = a[i][0];
                int col = b[j][0];
                int val = a[i][2] * b[j][2];

                int found = 0;
                for (int x = 1; x < k; x++)
                {
                    if (c[x][0] == row && c[x][1] == col)
                    {
                        c[x][2] += val;
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    c[k][0] = row;
                    c[k][1] = col;
                    c[k][2] = val;
                    k++;
                }
            }
        }
    }

    c[0][0] = m;
    c[0][1] = b[0][0];
    c[0][2] = k - 1;
}

void bubbleSort(int c[][3])
{
    int t = c[0][2];
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t - i; j++)
        {
            if (c[j][0] > c[j + 1][0] ||
                (c[j][0] == c[j + 1][0] && c[j][1] > c[j + 1][1]))
            {

                int temp = c[j][0];
                c[j][0] = c[j + 1][0];
                c[j + 1][0] = temp;

                temp = c[j][1];
                c[j][1] = c[j + 1][1];
                c[j + 1][1] = temp;

                temp = c[j][2];
                c[j][2] = c[j + 1][2];
                c[j + 1][2] = temp;
            }
        }
    }
}

int main()
{
    int m, n, size1, size2;
    cout << "Enter rows, cols and nonZero count of A: ";
    cin >> m >> n >> size1;
    int A[size1 + 1][3];
    A[0][0] = m;
    A[0][1] = n;
    A[0][2] = size1;
    cout << "Enter row col val for A: " << endl;
    for (int i = 1; i <= size1; i++)
        cin >> A[i][0] >> A[i][1] >> A[i][2];

    int p, q;
    cout << "Enter rows, cols and nonZero count of B: ";
    cin >> p >> q >> size2;
    int B[size2 + 1][3];
    B[0][0] = p;
    B[0][1] = q;
    B[0][2] = size2;
    cout << "Enter row col val for B: " << endl;
    for (int i = 1; i <= size2; i++)
        cin >> B[i][0] >> B[i][1] >> B[i][2];

    int BT[size2 + 1][3];
    transpose(B, BT);

    int C[size1 * size2 + 1][3];
    multiply(A, BT, C);

    bubbleSort(C);

    cout << "\nResultant matrix in triplet form:" << endl;
    for (int i = 0; i <= C[0][2]; i++)
    {
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
    }

    cout << "\nResultant matrix :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int val = findValue(C, m, q, C[0][2], i, j);
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
