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


ll log_a_to_base_b(ll a, ll b)
{
    return log(a) / log(b);
}


void display(ll num,ll i)
{
    ll sum,quo,rem;
    sum=0;
    while(num>0)
        {
            rem=pow(i,log_a_to_base_b(num,i));
            quo=floor(double(double(num)/double(rem)));
            deb(quo)
            num=num%rem;
            sum+=quo;
        }
}



void solve()
{
    ll n,num,l,flag,r,i,sum,min_sum=LONG_LONG_MAX,rem,quo,base;
    cin>>n>>l>>r;
    for(i=l;i<=r;i++)
    {
        num=n;
        sum=0;
        flag=0;
        while(num>0)
        {
            rem=pow(i,log_a_to_base_b(num,i));
            quo=floor(double(double(num)/double(rem)));
            num=num%rem;
            sum+=quo;
        }
      
        if(sum<=min_sum)
        {
            min_sum=sum;
            base=i;
        }
    }
    deb(base)
}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        // solve();
        display(216,11);
    }   
    reto
}