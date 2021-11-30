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
    char a='-',b='-',c='-';
    string s;

    unordered_map<char,char> alphas={ 
        {'A','-'} ,
        {'B','-'} ,
        {'C','-'}
    };
    
    cin>>s;
    alphas[s[0]]='(';
    if(alphas[s[s.length()-1]]=='(')
    {
        NO
        return;
    }
    
    alphas[s[s.length()-1]]=')';

    ll openingCount,endingCount;
    
    if(alphas['A']=='(')
    openingCount=count(all(s),'A');
    else if(alphas['B']=='(')
    openingCount=count(all(s),'B');
    else
    openingCount=count(all(s),'C');

    if(alphas['A']==')')
    endingCount=count(all(s),'A');
    else if(alphas['B']==')')
    endingCount=count(all(s),'B');
    else 
    endingCount=count(all(s),'C');
    
    if(openingCount==endingCount && openingCount+endingCount!=s.length())
    {
        NO
        return;
    }
    else if(openingCount<endingCount)
    {
        if(alphas['A']=='-')
        alphas['A']='(';
        else if(alphas['B']=='-')
        alphas['B']='(';
        else
        alphas['C']='(';
    }
    else if(endingCount<openingCount)
    {
        if(alphas['A']=='-')
        alphas['A']=')';
        else if(alphas['B']=='-')
        alphas['B']=')';
        else
        alphas['C']=')';
    }

    vector<char> expressions(s.length());

    for(ll i=0;i<s.length();i++)
    {
        expressions[i]=alphas[s[i]];
    }

    ll count=0,i=0;
    while(i<s.length() && count>=0)
    {
        if(expressions[i]=='(')
        count++;
        else 
        count--;
        if(count<0)
        break;
        i++;
    }

    if(count==0)
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