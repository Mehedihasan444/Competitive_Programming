#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    char str[t];
    for (int i = 0; i < t; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (str[i] == str[i + 1])
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}