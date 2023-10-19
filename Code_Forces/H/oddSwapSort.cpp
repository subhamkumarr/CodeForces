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

        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }

        vector<int> sortedOdd = odd;
        vector<int> sortedEven = even;
        sort(sortedOdd.begin(), sortedOdd.end());
        sort(sortedEven.begin(), sortedEven.end());

        bool ans = true;
        for (int i = 0; i < odd.size(); i++)
        {
            if (sortedOdd[i] != odd[i])
            {
                ans = false;
                break;
            }
        }
        for (int i = 0; i < even.size(); i++)
        {
            if (sortedEven[i] != even[i])
            {
                ans = false;
                break;
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}