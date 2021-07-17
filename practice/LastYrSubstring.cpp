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
    ll cases,n,index,flag;
    string comp="2020";
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(s.substr(0,4)==comp)
        YES
        else if(s.substr(n-4,n-1)==comp)
        YES
        else if((s.substr(0,1)+s.substr(n-3,n-1))==comp)
        YES
        else if((s.substr(0,2)+s.substr(n-2,n-1))==comp)
        YES
        else if((s.substr(0,3)+s.substr(n-1,n-1))==comp)
        YES
        else 
        NO


    }
    
    reto
}