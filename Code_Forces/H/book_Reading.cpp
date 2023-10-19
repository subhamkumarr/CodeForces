#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long repeat = n / m; // Number of complete cycles
        long long remainder = n % m; // Remaining numbers after complete cycles

        long long sum = 0;

        // Calculate the sum of last digits (0 to 9) for one complete cycle
        long long cycle_sum = (0 + 9) * 10 / 2;

        // Calculate the sum of last digits for complete cycles
        sum += repeat / 10 * cycle_sum * 10;

        // Calculate the sum of last digits for the remaining complete cycle
        long long lastDigitOfM = m % 10;
        for (long long i = 1; i <= remainder; i++) {
            sum += (lastDigitOfM * i) % 10;
        }

        cout << sum << endl;
    }

    return 0;
}
