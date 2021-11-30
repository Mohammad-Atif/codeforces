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

bool compare(pair<ll,ll> p1 ,pair<ll,ll> p2){
    return (p1.first<p2.first);
}

void solve()
{
    long double heroPower,heroHealth,n,i,healthdec=0,totalmonster=0;
    ll m,heroAttacks;
    cin>>heroPower>>heroHealth>>n;
    vector<long double> monsterPower(n),monsterHealth(n);
    for(i=0;i<n;i++)
    cin>>monsterPower[i];
    for(i=0;i<n;i++)
    cin>>monsterHealth[i];
    totalmonster=accumulate(all(monsterHealth),0);
    vector<pair<ll,ll>> monster(n);
    for(i=0;i<n;i++)
    monster[i]=make_pair(monsterPower[i],monsterHealth[i]);
    sort(all(monster),compare);
    i=0;
    while(i<n){
        heroAttacks=ceil(monster[i].second/heroPower);
        healthdec=monster[i].first*heroAttacks;
        m=ceil(heroHealth/monster[i].first);
        if(m<heroAttacks)
        {
            // cout<<"m:"<<m<<" heroA:"<<heroAttacks<<endl;
            // deB("heroHealth:",heroHealth)
            break;

        }
        
        
        heroHealth-=healthdec;
        i++;
        if(heroHealth<=0)
        {
            break;
        }
    }
    // deb(healthdec)
    if(i>=n )
    YES
    else
    NO

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