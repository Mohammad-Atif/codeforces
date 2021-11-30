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

vector<vector<char>> ar( 50, vector<char>(50));

ll checktile(ll i,ll j,ll n)
{
    if((j+2)<n && ar[i][j+1]=='.' && ar[i][j+2]=='.' && (i+1)<n && (i-1)>=0 && ar[i-1][j+1]=='.' && ar[i+1][j+1]=='.')
    {
        ar[i][j]='#';ar[i][j+1]='#';ar[i][j+2]='#';ar[i-1][j+1]='#';ar[i+1][j+1]='#';
        return 5;
    }
    
    else
    return 0;
}



void solve()
{
    ll n,dotcount=0,d=0,i,j;

    cin>>n; 

    

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }

    for(i=0;i<n;i++)
    dotcount+=count(all(ar[i]),'.');

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[i][j]=='.')
            d+=checktile(i,j,n);
        }
    }

    // deB("dotcount:",dotcount)
    // deB("d",d)
    if(dotcount<=d)
    YES
    else 
    NO  
}


int main()
{ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
   
    solve();
      
    reto
}