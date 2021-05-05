#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
#include<stack>
#include <math.h>
#include<climits>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES cout<<"YES\n";
#define Yes cout<<"Yes\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define clt(x) 63-__builtin_clzll(x)
#define bct(x) __builtin_popcountll(x)
#define all(v) (v).begin(),(v).end()
#define pi pair<ll,ll>
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define maxq priority_queue<ll>
#define minq priority_queue<ll,vector<ll>, greater<ll>>
#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009
//typedef tree<int,null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> //pbds;

void checks(ll int n)
{
    ll int digits,first,ans,second,flag=1;
   
    ans=9;
    if(n<10)
    {
        cout<<n<<endl;
        return;
    }

    digits= floor(log10(n) + 1);
    first=(int)(n / pow(10, digits-1));
    ans=9*(digits-1);
    ans+=(first-1);
    while(n)
    {
        second=n%10;
        if(second<first)
        {
            flag=0;
            break;
        }
        n/=10;

    }
    if(flag)
    ans++;
    cout<<ans<<endl;
    

}
int main()
{
    ll int cases,n,r,ans;
    cin>>cases;
    while(cases--)
    {
        ans=0;
        cin>>n;
        checks(n);

    }
    return 0;
}