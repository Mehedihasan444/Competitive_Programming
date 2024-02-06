#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int left_to_right;
        int right_to_left;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {

                left_to_right = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {

            if (s[i] == 'B')
            {

                right_to_left = i;
                break;
            }
        }
        cout << abs(left_to_right - right_to_left )+ 1 << endl;
    }
    return 0;
}