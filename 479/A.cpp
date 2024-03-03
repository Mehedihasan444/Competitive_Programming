

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
   
    int mx = max({a + b * c,a + b + c, a * (b + c), a * b * c, (a + b) * c});
    
    cout << mx << endl;

    return 0;
}

