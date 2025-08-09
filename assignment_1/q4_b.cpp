#include <iostream>
using namespace std;

void multi(int row, int col,int row2,int col2,int *matrix, int *matrix2,int *result)
{
    if(col!=row2){
        cout<<"Invalid multiplication";
        return;
    }
    for(int i=0;i<row;i++){
        for(int j =0;j<col2;j++){
            result[i*col2+j]=0;
            for(int k =0;k<col;k++){
                result[i*col2+j]+=matrix[i*col+k]*matrix2[k*col2+j];
            }
        }
    }

}
void display(int row,int col,int* result){
    cout<<"Result:"<<endl;
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<result[i*col+j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int row, col;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of col: ";
    cin >> col;
    cout << "a" << row << "b" << col;

    int *matrix = new int[row * col];
    cout << "Enter numbers:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i * col + j];
        }
    }
    int row2, col2;
    cout << "Enter no. of rows: ";
    cin >> row2;
    cout << "Enter no. of col: ";
    cin >> col2;
    cout << "a" << row2 << "b" << col2;

    int *matrix2 = new int[row2 * col2];
    cout << "Enter numbers:" << endl;

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i * col2+ j];
        }
    }
    int *result=new int[row*col2];
    multi(row,col,row2,col2,matrix,matrix2,result);
    display(row,col2,result);

    return 0;
}