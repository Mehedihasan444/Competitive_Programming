
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s, n, flag = 0;
    cin >> s >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (auto p : a)
    {
        if (p.first >= s)
        {
            cout << "NO" << endl;
            flag = 1;
            return 0;
        }
        s += p.second;
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }

    return 0;
}