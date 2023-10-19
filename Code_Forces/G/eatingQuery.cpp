#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

ll solve() {
    ll n, q;
    cin >> n >> q;
    vl v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());  
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum = sum + v[i];
        v[i] = sum;
    }

    while (q--) {
        ll sumReq;
        cin >> sumReq;
        ll ans = -1;
        ll l = 0, r = n - 1;

        while (r >= l) {
            ll mid = l + (r - l) / 2;
            if (v[mid] >= sumReq) {
                ans = mid + 1;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0; 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
