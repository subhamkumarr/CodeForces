#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0;
        int minVal = a[n-1];
        for (int i = n-2; i >= 0; i--)
        {
            if(a[i] > minVal)
            {
                count++;
            }
            minVal = min(a[i], minVal);
        }
        cout << count << endl;
    }
}