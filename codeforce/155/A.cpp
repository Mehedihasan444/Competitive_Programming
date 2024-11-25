#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

int lastMax=a[0];
int lastMin=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < lastMin)
        {
          lastMin=a[i];
            c++;
        }
        else if(a[i] > lastMax){
          lastMax=a[i];
          c++;
        }
    }
   
    cout << c << endl;
    return 0;
}