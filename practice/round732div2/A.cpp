#pragma GCC optimize("O2")
#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define all(v) (v).begin(),(v).end()

#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
#define vi vector<ll>

void solve()
{
   ll n,i,difA=0,difB=0,j;
   stack<ll> more,less;
   cin>>n;
   vi a(n),b(n);
   for(i=0;i<n;i++)
   cin>>a[i];
   for(i=0;i<n;i++)
   cin>>b[i];
   for(i=0;i<n;i++)
   {
       if(a[i]>b[i])
       {
           difB+=(a[i]-b[i]);
           for(j=0;j<(a[i]-b[i]);j++)
           more.push(i+1);
       }
       else if(b[i]>a[i])
       {
           difA+=(b[i]-a[i]);
           for(j=0;j<(b[i]-a[i]);j++)
           less.push(i+1);
       }
   }
   if(difA!=difB)
   {
       deb(-1)
       return;
   }
   deb(more.size())
   while(!more.empty())
   {
       deB(more.top(),less.top())
       more.pop();
       less.pop();
   }
}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }   
    reto
}