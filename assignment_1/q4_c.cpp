#include <iostream>
using namespace std;

void transpose(int row, int col, int *matrix, int *result)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            result[i * row + j] = matrix[j * col + i];
        }
    }
}
void display(int row, int col, int *result)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i * col + j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of col: ";
    cin >> col;

    cout << "Enter the numbers:" << endl;
    int *matrix = new int[row * col];
    int *result = new int[row * col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i * col + j];
        }
    }
    transpose(row, col, matrix, result);
    display(col, row, result);

    delete[] matrix;
    delete[] result;

    return 0;
}