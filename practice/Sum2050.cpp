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

ll countDigit(long long n) {
  return floor(log10(n) + 1);
}

void solve(ll n)
{
    ll digs=countDigit(n)-4;
    if(digs<4)
    {
      cout<<"-1\n";
      return;
    }
    ll num=2050*pow(10,digs);
    
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        solve(n);
    }
    reto
}