#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> towns; // To store the pro-Aoki and pro-Takahashi voters for each town.

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        towns.push_back({a, b});
    }

    int speeches_needed = 0;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            // Calculate the votes for Takahashi and Aoki in each town.
            int takahashi_votes = towns[i].second;
            int aoki_votes = towns[i].first;

            // Check if Takahashi needs to make a speech in this town.
            if (takahashi_votes <= aoki_votes)
            {
                speeches_needed++;
            }
        }
        if(n%2==0)
        cout << speeches_needed / 2 << endl;
        else
        cout<<((speeches_needed/2)+1)<<endl;
    }

        return 0;
}