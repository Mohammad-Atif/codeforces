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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve()
{
    ll x,y,ans=0,min,maxx;
    cin>>x>>y;

    if(x==y)
    {
        if(x!=1)
        deb(0)
        else
        deb(2)
        return;
    }

    if(gcd(x,y)>=2)
    {
        deb(0)
        return;
    }

    min=x<y?x:y;
    maxx=x>y?x:y;

    if(min==1)
    {
        ans++;
        min++;
    }
    if(maxx%min==0){
        ans+=0;
        deb(ans)
        return;
    }
    if(min%2==0 && maxx%2!=0)
        {
            ans+=1;
            deb(ans)
            return;            
    }
    else if(min%2!=0 && maxx%2==0)
    {
        ans+=1;
        deb(ans)
        return;
    }
    else
    {
        if(gcd(maxx+1,min)>=2 || gcd(maxx,min+1)>=2)
        {
            ans+=1;
            deb(ans)    
        }
        else
        {
            ans+=2;
            deb(ans)
        }
        
    }


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