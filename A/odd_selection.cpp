#include <bits/stdc++.h>
using namespace std;

void kaam()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int even = 0, odd = 0;

    if (n == 1)
    {
        if (arr[0] % 2 != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        return;
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0 || x % 2 == 0 && even == 0 || n == x && odd % 2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        return;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        kaam();
    }
    return 0;
}