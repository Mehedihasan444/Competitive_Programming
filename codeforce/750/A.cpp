#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 0, flag = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum + k >= 240)
        {
            flag = 1;
            cout << ((sum + k) == 240 ? i : (i - 1)) << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << n << endl;
    }

    return 0;
}