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
    ll xa,ya,xb,yb,xf,yf,distance;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xf>>yf;
    distance=abs(xa-xb)+abs(ya-yb);
    if(xa==xb && xa==xf && !(yf>ya && yf>yb) && !(yf<ya && yf<yb))
    {
        distance+=2;
    }
    else if(ya==yb && ya==yf && !(xf>xa && xf>xb) && !(xf<xa && xf<xb))
        distance+=2;

    deb(distance)

    
}


int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }   
    reto
}