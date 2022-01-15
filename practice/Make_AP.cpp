// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
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
    ll a,b,c;
    cin>>a>>b>>c;

    if(a+c == 2*b)
    {
        YES
    }
    else if( ( (a+c)%2==0 && ((a+c)/2)%b==0 ) || ((2*b-a)!=0 && (2*b-a)%c==0 && ((2*b-a)*c>0)) || ((2*b-c)!=0 && (2*b-c)%a==0 && ((2*b-c)*a>0) )  )
    YES
    else
    NO
    // if((a==b && b==c) || (a>=b && b>c && c==1) || (a<b && b<=c && a==1) )
    // {
    //     YES
    //     return;
    // }

    // if(b>a && b>c)
    // {
    //     NO
    //     return;
    // }

    // if((a==b && b%c==0 ) || (a==c && a%b==0) || (b==c && b%a==0) )
    // {
    //     YES
    //     return;
    // }



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