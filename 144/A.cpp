

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_height = *max_element(a, a + n);
    int min_height = *min_element(a, a + n);


    int max_idx = -1, min_idx = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == max_height && max_idx == -1) {
            max_idx = i;
        }
        if (a[i] == min_height) {
            min_idx = i;
        }
    }

    
    int min_swaps = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx) {
        min_swaps--;
    }

    cout << min_swaps << endl;

    return 0;
}
