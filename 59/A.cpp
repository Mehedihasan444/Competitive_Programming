
#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
cin >> s;
int c=0,l=0;
for (int i = 0; i < s.length(); i++) {
    if(isupper(s[i])) {
        c++;
}
else
{
    l++;
}
}
if (c>l) 
{
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s<<endl;
}else
{
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout << s<<endl;

}


    return 0;
}