#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push_back(v[i]);
    }
    sort(s.begin(), s.end());
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(v[i]==s[j]) v[i]=j;
        }
    }
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
}