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
    // ll n,i,mean,less=0,more=0;
    // cin>>n;
    // vi ar(n);
    // for(i=0;i<n;i++)
    // cin>>ar[i];
    // // mean=accumulate(all(ar),0)/n;
    // // for(i=0;i<n;i++) 
    // // {
    // //     if(ar[i]<mean)
    // //     less+=(mean-ar[i]);
    // //     else if(ar[i]>mean)
    // //     more+=(ar[i]-mean);
    // // }
    // // deb(abs(more-less))
    // ll ans=0;
    //     for(ll i=0;i<n-1;i++)
    //     {
    //         for(ll j=i+1;j<n;j++)
    //         {
    //             if(gcd(ar[i],2*ar[j])>=2 || gcd(2*ar[i],ar[j])>=2)
    //             ans++;
    //         }
    //     }
    //     deb(ans)
    ll n,extra=0,i,mean,ans;
    cin>>n;
    vi arr(n);
    for(i=0;i<n;i++)
    cin>>arr[i];
    mean=accumulate(all(arr),0);
    mean=floor(mean/n);
    sort(all(arr),greater<ll>());
    i=0;
    do
    {
        if(arr[i]>mean)
        {
            extra+=arr[i]-mean;
            arr[i]=mean;
        }
        else if(arr[i]<mean)
        {
            if(extra>=mean-arr[i])
            {
                extra-=(mean-arr[i]);
                arr[i]=mean;
            }
            else
            {
                arr[i]+=extra;
                extra=0;
            }
        }
        i++;
    } while (extra>0 && i<n);
    if(extra>0)
    {
        extra=extra%n;
        extra=n-extra;
    }
    ans=extra*(n-extra);
    deb(ans)
    
    

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