#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int minimum = min({a, b, c});
        bool pois = true;
        int count = 0;

        if (a % minimum != 0 || b % minimum != 0 || c % minimum != 0) {
            pois = false;
        }

        while (a != minimum) {
            if (a % minimum != 0 || count > 3) {
                pois = false;
                break;
            }
            a -= minimum;
            count++;
        }

        while (b != minimum) {
            if (b % minimum != 0 || count > 3) {
                pois = false;
                break;
            }
            b -= minimum;
            count++;
        }

        while (c != minimum) {
            if (c % minimum != 0 || count > 3) {
                pois = false;
                break;
            }
            c -= minimum;
            count++;
        }

        if (count > 3) {
            pois = false;
        }

        if (pois) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}






