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

ll hP2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}

void solve(ll a)
{
    cout<<hP2(a)-1<<endl;
}


int main()
{ 
    ll cases,n;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        solve(n);
    }
    reto
}