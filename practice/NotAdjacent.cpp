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
    ll cases,n,shuffle,beg,end;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        if(n==1)
        {
            deb(1)
            cont
        }
        else if(n==2)
        {
            deb(-1)
            cont
        }
        vector<vector<ll>> ar(n,vector<ll> (n));
        shuffle=0;
        beg=1;
        end=n*n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(shuffle==0)
                {
                    ar[i][j]=beg++;  
                }
                else
                {
                    ar[i][j]=end--;
                }
                shuffle=(shuffle+1)%2;
            }
        }
        swap(ar[0][0],ar[n-1][n-1]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<"\n";
        }      
        

    }   
    
    reto
}