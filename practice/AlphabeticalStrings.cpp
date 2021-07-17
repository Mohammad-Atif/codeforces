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
    string s;
    cin>>s;
    ll pos_a=-1,left=1,right=1,total=1,i,flag=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            pos_a=i;
            break;
        }
    }
    if(pos_a==-1)
    {
        NO
        return;
    }
 
    i=98;
    while(i<=122 && total<s.length())
    {
        if(pos_a+right<s.length() && s[pos_a+right]==char(i))
        right++;
        else if(pos_a-left>=0 && s[pos_a-left]==char(i))
        left++;
        else
        {
            flag=1;
            break;
        }
        i++;
        total++;
    }
    if(flag)
    NO
    else 
    YES
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