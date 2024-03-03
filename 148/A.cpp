#include<bits/stdc++.h>
using namespace std;
int main(){
int k,l,m,n,d;

cin>>k>>l>>m>>n>>d;
int a[d];
for (int i = 0,j=1; i < d; i++,j++)
{
    a[i] =j;
}
int damage =0;

for (int j=k; j <= d; j+=k){
   
    
    a[j]=-1;
    damage++;
}
for (int j=l; j <= d; j+=l){
   
    if (a[j] ==-1)
    {
       continue;
    }
    
    a[j]=-1;
    damage++;
}
for (int j=m; j <= d; j+=m){
   
    if (a[j] ==-1)
    {
       continue;
    }
    
    a[j]=-1;
    damage++;
}
for (int j=n; j <= d; j+=n){
   
    if (a[j] ==-1)
    {
       continue;
    }
    
    a[j]=-1;
    damage++;
}
cout<<damage<<endl;


    return 0;
}