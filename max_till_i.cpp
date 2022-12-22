#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<a[0]<<" ";
    for (int i = 1; i < n; i++)
    {
        int mx = a[i - 1];
        mx = max(mx, a[i]);
        cout << mx << " ";
    }
    return 0;
}