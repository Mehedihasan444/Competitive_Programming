#include <iostream>
using namespace std;

int main() {
int k,n,w,sum=0;

cin>>k>>n>>w;

for(int i=1;i<=w;i++)
{
    sum=sum+(i*k);
}
int need = sum-n;
if (need<0)
{
    cout<<0<<endl;
}
else{

cout<<need<<endl;
}
    return 0;

}