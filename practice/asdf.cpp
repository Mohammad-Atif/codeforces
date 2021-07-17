#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

ll t,n;
cin>>t;
while(t--)
{
cin>>n;
vector<ll> ar(n),b(100);
for(int i=0;i<n;i++)
cin>>ar[i];
for(int i=0;i<100;i++)
b[i]=i+1;
sort(ar.begin(),ar.end());
ll flag=0;
for(int i=0;i<n;i++)
{
if(ar[i]<0)
{
cout<<"NO\n";
flag=1;
break;
}
}

if(flag)
{
cout<<"YES\n100\n";
for(int i=0;i<100;i++)
cout<<b[i]<<" ";
cout<<"\n";
}
}


return 0;
}