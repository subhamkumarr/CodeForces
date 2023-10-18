#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> recipes(200002, 0); 

    while (n--) {
        int l, r;
        cin >> l >> r;
        recipes[l]++;
        recipes[r + 1]--;
    }

    int cnt = 0;
    vector<int> admissible(200002, 0); 

    for (int i = 0; i < recipes.size(); i++) {
        cnt += recipes[i];
        if (cnt >= k) {
            admissible[i] = 1;
        }
    }

    vector<int> sum(200002, 0); 

    for (int i = 1; i < admissible.size(); i++) {
        sum[i] = sum[i - 1] + admissible[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << sum[r + 1] - sum[l] << endl;
    }

    return 0;
}
