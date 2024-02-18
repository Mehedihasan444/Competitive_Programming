#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
    //     else
    //     {
    //         sum -= i;
    //     }
    // }
    if (n%2 == 0)
    {
        sum=n/2;
    }else
    {
        sum= -(n+1)/2;
    }
    
    

    cout << sum << endl;

    return 0;
}



