#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the aray elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp = arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int currentlength = 2;
    int j = 2;
    while (j < n)
    {
        if ((arr[j] - arr[j - 1]) == pd)
        {

            currentlength++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            currentlength = 2;
        }
        ans = max(ans, currentlength);
        j++;
    }

    cout << "the max contigous string is:" << ans << endl;
    return 0;
}