#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r - l < 1)
        {
         cout << -1 <<" "<<- 1 << endl;
        }
        else if (l * 2 <= r)
        {
            cout << l << " " << l * 2 << endl;
        }
        else
        {
            cout << -1 <<" "<<- 1 << endl;
        }
        
    }
}
