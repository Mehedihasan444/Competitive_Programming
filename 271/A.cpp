#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int y;
    // cin >> y;
    // for (int i = y;; i++)
    // {
    int i = 1987;
    int a = 0, b = 0, c = 0;
    a = i % 10;
    b = ((i / 10) - a) % 10;
    c = ((i / 10) - b) % 10;
    cout << a << " " << b << " " << c;
    //     if (a != b && b != c)
    //     {
    //         /* code */
    //     }
    // }

    return 0;
}