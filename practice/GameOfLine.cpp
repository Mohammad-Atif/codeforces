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

ll changeval(string &s,ll pos,ll m,ll n)
{
    ll i,j,forward=-1;
    if(!(pos-2>=0 && s[pos-2]=='1') && pos-1>=0)
    {
        for(i=pos-1,j=0;i>=0 && j<m;i--,j++)
        {
          if(s[i]=='1')
              break;
           s[i]='1';
         }
    }
    if(!(pos+2<n && s[pos+2]=='1') && pos+1<n)   
    {
        forward=pos+1;
        j=0;
        while(forward<n && j<m)
        {
            if(s[forward]=='1')
                break;
            s[forward]='1';
            forward++;
            j++;
        }
    }
    if(forward!=-1)
    return forward;
    else
    return pos;
 
     
}


int main()
{ 
    
    ll cases,n,m,i,prev;
    cin>>cases;
    while(cases--)
    {
        cin>>n>>m;
        string s;
        cin>>s;
      
        
        i=0;
        while(i<n)
        {
            if(s[i]=='1')
            {
                prev=i;
            i=changeval(s,i,m,n);
            if(i!=prev)
            cont
            }
            i++;
        }
        deb(s)
        s.clear();
    }
    
    reto
}