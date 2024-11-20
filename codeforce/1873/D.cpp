#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("D:/Coding/Code_force/input.txt","r",stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, c = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                c++;
                i+=k-1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}