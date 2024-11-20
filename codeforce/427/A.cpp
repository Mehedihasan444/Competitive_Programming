#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, s = 0, p = 0;
    cin >> n;
    queue<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push(temp);
    }

    for (int i = 0; i < n; i++)
    {
        if (a.front() == -1 && s == 0)
        {
            p++;
        }
        else if (a.front() != -1)
        {

            s += a.front();
        }
        else if (a.front() == -1)
        {
            s += a.front();
        }
        a.pop();
    }
    cout << p << endl;
    return 0;
}