#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int minm = INT_MAX;
        int mindx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < minm)
            {
                minm = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}
