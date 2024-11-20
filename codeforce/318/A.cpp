#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    long long int index = 0;
    for (int i = 1, j = 0; i <= n; i += 2)
    {

        a[j] = i;
        if (j>=k-1)
        {
             cout << a[k - 1] << endl;
            return 0;
        }
        
        j++;
        index = j;
    }
    for (int i = 2, j = index; i <= n; i += 2)
    {

        a[j] = i;
         if (j>=k-1)
        {
             cout << a[k - 1] << endl;
            return 0;
        }
        j++;
    }

    cout << a[k - 1] << endl;

    return 0;
}



// optimised  
#include <iostream>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    // Calculate the k-th number directly
    long long int index;
    if (k <= (n + 1) / 2) {
        index = k * 2 - 1;
    } else {
        index = (k - (n + 1) / 2) * 2;
    }

    cout << index << endl;

    return 0;
}

