#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int x1,x2,x3,s=0;
cin>>x1>>x2>>x3;
int a[3]={x1,x2,x3};
sort(a,a+3);
s+=abs(a[1]-a[0]);
s+=abs(a[1]-a[2]);
cout<<s<<endl;
    return 0;
}