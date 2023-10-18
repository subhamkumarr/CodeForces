#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        long long x;
        cin>>x;

        bool mila = false;
        for(long long a=1; a*a*a<x; a++)
        {
            long long c = (x-(a*a*a));
            long long b = cbrt(c);

            if(b*b*b == c)
            {
                mila = true;
                break;
            }
        }

        if(mila)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}