#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }
    int value = 0;
    for (int i = n - 1, c = 1; i >= 0; i--, c++)
    {

        value += a[i];
        if (value > (sum / 2))
        {
            cout << c << endl;
            break;
        }
    }

    return 0;
}