#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of aray" << endl;
    cin >> n;
    int arr[n];
    cout << "entering array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < (n - counter); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                
            }
        }
        counter ++;
    }
    cout << "the sorted array is as follows:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}