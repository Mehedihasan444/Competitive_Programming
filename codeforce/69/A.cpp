#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
int sum1=0,sum2=0,sum3= 0;
while (t--)
{
    int x,y,z;
    cin >> x >> y >> z;
sum1 += x;
sum2+=y;
sum3+=z;
}
if (sum1==0 && sum2==0 && sum3==0){
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}


    return 0;
}