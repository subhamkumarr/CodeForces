#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end(), greater<int>());

    int myCoin = 0;
    int mid = (0+n-1)/2;
    
    if(n == 0)
    {
        return 0;
    }
    else if(n==2)
    {
        int i=1;
        if(coins[i] != coins[i-1])
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    else
    {
        cout<<mid+1<<endl;
    }
    
}