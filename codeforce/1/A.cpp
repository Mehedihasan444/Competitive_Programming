#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    long long int n, m, a, c = 0;
    cin >> n >> m >> a;


    long long int height = ceil((double)n / a);
    long long int width = ceil((double)m / a);


    c = height * width;

    cout << c << endl;
    return 0;
}
