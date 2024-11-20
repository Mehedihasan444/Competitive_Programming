#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c=0,d=0;
        cin >> n;
        int a[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> a[i];
             if (a[i] % 2 == 0 )
            {
                c++;
                
            }
            else
            {
                d++;
            }
            
        }
    
        if (c==d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }

    return 0;
}