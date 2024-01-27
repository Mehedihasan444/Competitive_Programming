

#include <iostream>

using namespace std;

bool isComposite(int x) {
    for (int i = 2; i  < x; i++) {
        if (x % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    if (t % 2 == 0) {
        for (int i = 4; i <= t; i++) {
            if (isComposite(i) && isComposite(t - i)) {
                cout << i << " " << t - i << endl;
                break;
            }
        }
    } else {
        for (int i = 4; i <= t ; i++) {
            if (isComposite(i) && isComposite(t - i)) {
                cout << i << " " << t - i << endl;
                break;
            }
        }
    }

    return 0;
}
