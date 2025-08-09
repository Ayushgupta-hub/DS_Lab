#include <iostream>
using namespace std;
// to calculate sum row wise and columne wise
void cal_sum(int row, int col, int *matrix, int sum_row[], int sum_col[])
{
    int sum;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i * col + j];
        }
        sum_row[i] = sum;
    }
    for (int i = 0; i < col; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += matrix[j * col + i];
        }
        sum_col[i] = sum;
    }
}
// display row wise sum
void display_row(int row, int sum_row[])
{
    cout << "row wise summation:" << endl;

    for (int i = 0; i < row; i++)
    {
        cout << sum_row[i] << endl;
    }
    cout << endl;
}
// display col wise sum
void display_col(int col, int sum_col[])
{
    cout << "col wise summation" << endl;
    for (int i = 0; i < col; i++)
    {
        cout << sum_col[i] << " ";
    }
    cout << endl;
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
    int sum_row[row];
    int sum_col[col];
    cout << endl;
    cal_sum(row, col, matrix, sum_row, sum_col);
    display_row(row, sum_row);
    display_col(col, sum_col);
    delete[] matrix;
    return 0;
}