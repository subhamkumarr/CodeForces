#include <bits/stdc++.h>
using namespace std;
//https://www.bing.com/videos/search?q=same+differences+codeforces+solution&view=detail&mid=DF87C8580E7F81F2DFEADF87C8580E7F81F2DFEA&FORM=VDRVRV&ajaxhist=0
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        map<long long, long long> mp;
        long long ans = 0;

        for(long long i=0; i<n; i++)
        {
            mp[arr[i]-i]++;
        }

        for(auto x:mp)
        {
            long long z = x.second;
            ans += (z*(z-1))/2;
        }
        cout<<ans<<endl;

    }
}