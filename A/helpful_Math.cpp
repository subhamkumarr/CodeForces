#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<int>sum;

    for(int i=0; i<s.length(); i +=2)
    {
        sum.push_back(s[i] - '0');
    }

    sort(sum.begin(), sum.end());

    for(int i=0; i<sum.size(); i++)
    {
        if(i>0)
        {
            cout<<'+';
        }
        cout<<sum[i];
    }
    return 0;
}