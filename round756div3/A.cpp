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


int countDigit(long long n) {
  return floor(log10(n) + 1);
}

void solve()
{
    ll n,r,c=0,rev=0,c1,c2;
    cin>>n;
    if(n%2==0)
    {
        deb(0);
        return;
    }
    
    // ll digits = countDigit(n);

    ll flag=1;

    while(n)
    {
        r=n%10;
        c++;
        rev=rev*10+r;
        if(r%2==0 && flag==1)
        {
            flag=0;
            c1=c;
        }
        n/=10;

    }
    c=0;
    if(flag==1)
    {
        deb(-1)
        return;
    }
    // cout<<rev<<endl;
    while(rev)
    {
        r=rev%10;
        c++;
        if(r%2==0)
        {
            flag=0;
            c2=c;
            break;
        }
        rev/=10;
    }

    
    if(c2==1)
    {
        deb(1)
    }
    else
    {
        deb(2)
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