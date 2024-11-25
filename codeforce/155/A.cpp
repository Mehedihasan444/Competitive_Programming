#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    int temp = a[0];
    int target = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == temp)
        {
            target = i;
        }
    }
    for (int i = 0; i < target; i++)
    {
        if (a[i] < a[i + 1])
        {
            c++;
        }
    }
    for (int i = target ; i < n; i++)
    {
        if (a[i] > a[i-1])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}