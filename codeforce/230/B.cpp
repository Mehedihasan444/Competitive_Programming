#include <iostream>
#include <cmath>
using namespace std;


bool checkTPrime(long long int a) {
    long long int temp = sqrt(a);
    return (temp * temp == a);
}

int main() {
 
    int arr[1000001] = {0};
    for (int i = 2; i <= 1000000; i++) {
        if (arr[i] == 0) { 
            for (int j = 2; i * j <= 1000000; j++) {
                arr[i * j] = 1;
            }
        }
    }

    int n;
    cin >> n;
    long long int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n; ++i) {
        if (array[i] <= 3) {
            cout << "NO" << endl;
        } else {
            long long int temp = sqrt(array[i]);
          
            if (checkTPrime(array[i]) && arr[temp] == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
