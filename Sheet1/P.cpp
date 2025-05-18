#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,ans;
cin>>a;
ans = a/1000;
ans%2 ==0;
if (ans%2 == 0)
{
    cout<<"EVEN"<<endl;
}
else {
    cout<<"ODD"<<endl;
}
}