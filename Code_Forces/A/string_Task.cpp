#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[101];
    char output[201];
    cin>>input;

    int index = 0;
    for(int i=0; i<strlen(input); i++)
    {
        char ch = tolower(input[i]);

        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
        {
            output[index++] = '.';
            output[index++] = ch;
        }
    }
    output[index] = '\0';
    cout<<output<<endl;

    return 0;
}