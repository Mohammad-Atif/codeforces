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



int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y,z,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        sumx+=x;sumy+=y;sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    YES
    else
    NO

    
    reto
}