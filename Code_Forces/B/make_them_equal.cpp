#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> distinct_elements_count;

    for (int i = 0; i < n; i++) {
        distinct_elements_count[a[i]]++;
    }

    vector<int> distinct_elements;
    for (auto it : distinct_elements_count) {
        distinct_elements.push_back(it.first);
    }

    int distinct_count = distinct_elements.size();

    if (distinct_count == 1) {
        cout << "0" << endl;
    } else if (distinct_count > 3) {
        cout << "-1" << endl;
    } else if (distinct_count == 2) {
        int diff = abs(distinct_elements[0] - distinct_elements[1]);
        if (diff % 2 == 1) {
            cout << diff << endl;
        } else {
            cout << diff / 2 << endl;
        }
    } else if (distinct_count == 3) {
        sort(distinct_elements.begin(), distinct_elements.end());
        if (2 * distinct_elements[1] == distinct_elements[0] + distinct_elements[2]) {
            cout << distinct_elements[1] - distinct_elements[0] << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}


