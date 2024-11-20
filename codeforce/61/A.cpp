#include<bits/stdc++.h>
using namespace std;
int main(){


    string str_a;
    string str_b;
    cin>>str_a>>str_b;
    for (int i = 0; i < str_a.size(); i++)
    {
        if (str_a[i] !=  str_b[i])
        {
            cout<<'1';
           
        }
        else
        {
            cout<<'0';
            
        }
        
        
    }
    cout<<endl;
    return 0;
}