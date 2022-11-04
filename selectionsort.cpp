#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array:"<<endl;
    for (int i = 0; i < n; i++)
    {   int k =0;
        cin >> k;
        arr[i]=k;
    }
    for (int i = 0; i < n - 1;i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "the sorted array is as follows:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}