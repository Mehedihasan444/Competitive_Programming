#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;

    while (n--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int s = a[0] + a[1];
        if (s == a[2])
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}