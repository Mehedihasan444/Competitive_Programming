#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    double percent[n];
    double orange_juice = 0.0;
    double temp = 100.0 / n;

    for (int i = 0; i < n; i++)
    {
        double divisor = p[i] * 0.01;
        orange_juice += temp * divisor;
    }
    cout << fixed << setprecision(12) << orange_juice << endl;
    return 0;
}
 