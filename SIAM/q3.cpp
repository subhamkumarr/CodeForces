#include <bits/stdc++.h>
using namespace std;

bool check(int mid, int a[], int n, int k)
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        cnt += min(a[i], mid);
        return cnt>=mid*k;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k, n;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0, r=1e9, ans = 0;

    while(l<=r)
    {
        int mid = (l+r)/2;
        if(check(mid, a, n, k))
        {
            l = mid;
            ans = mid;    
        }
        else
        {
            r = mid -1;
        }
    }
    cout<<ans<<endl;
}