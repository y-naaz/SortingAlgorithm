#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter  only no-zero  positive elements elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] > 0)
            {
                if (v[j] < mini)
                {
                    mini = v[j];
                    mindx = j;
                }
            }
        }
        v[mindx] = x;
        x--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i]*(-1) << " ";
    }
}