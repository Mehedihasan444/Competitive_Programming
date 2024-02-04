#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, in = 0, exit = 0, stay = 0, max = 0;
    while (n--)
    {
        cin >> a >> b;

        in += b;
        exit += a;
        stay = in - exit;

        if (stay > max)
        {
            max = stay;
        }
    }

    cout << max << endl;
    return 0;
}