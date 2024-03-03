#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    int array[200];

    for (int i = 0; i < p; i++)
    {
        array[i] = a[i];
    }
    for (int i = p, j = 0; i < q + p; i++, j++)
    {
        array[i] = b[j];
    }
    sort(array, array + (p + q));
    int c = 0;
    for (int i = 0; i < p + q; i++)
    {
        if (array[i] != array[i + 1])
        {
            c++;
        }
    }
    if (c == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}