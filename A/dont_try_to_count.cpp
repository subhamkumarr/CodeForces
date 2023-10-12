#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string s1, s2;
        cin >> s1 >> s2;

        bool pos = false;

        for (int i = 0; i < 7; ++i) {
            if (s1.find(s2) != string::npos) {  
                pos = true;
                cout << i << endl;
                break;
            }
            s1 += s1;
        }

        if (!pos) {
            cout << "-1" << endl;
        }
    }

    return 0;
}
