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
        long long n, k;
        cin>>n>>k;
        if(log2(n) < k)
        {
            cout<<n+1<<endl;
        }
        else
        {
            cout<< (int) pow(2, k) <<endl;
        }
    }
}