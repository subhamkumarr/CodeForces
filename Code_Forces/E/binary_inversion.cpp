#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll invCount(vector<int> a, int n) {
    ll inversions = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            one++;
        } else {
            inversions += one; 
        }
    }
    return inversions;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll maxInversions = invCount(a, n); 

        int index = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                a[i] = 1;
                index = i;
                break;
            }
        }

        maxInversions = max(maxInversions, invCount(a, n));

        if (index != -1) {
            a[index] = 0; 
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 1) {
                a[i] = 0;
                break;
            }
        }

        maxInversions = max(maxInversions, invCount(a, n));

        cout << maxInversions << endl;
    }
}
