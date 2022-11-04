#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int start_row = 0, end_row = n - 1, start_column = 0, end_column = m - 1;
    while (start_row <= end_row && start_column <= end_column)
    {
        for (int col = start_column; col <= end_column; col++)
        {
            cout << arr[start_row][col] << " ";
        }
        start_row++;
        for (int row = start_row; row <= end_row; row++)
        {
            cout << arr[row][end_column] << " ";
        }
        end_column--;
        for (int col = end_column; col >= start_column; col--)
        {
            cout << arr[end_row][col] << " ";
        }
        end_row--;
        for (int row = end_row; row >= start_row; row--)
        {
            cout << arr[row][start_column] << " ";
        }
        start_column++;
    }
    return 0;
}
