#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cases,i,n,tmp,pos;
    vector<int> ar,t;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            ar.push_back(tmp);
        }
        t=ar;
        sort(t.begin(),t.end());
        i=0;
        while(i<n)
        {
            if(t[i]!=t[i+1])
            {
                 auto it=find(ar.begin(),ar.end(),t[i]);
                 cout<<it-ar.begin()+1<<endl;
                 break;
            }
            else 
            {
                tmp=t[i];
                while(t[i]==tmp && i<n)
                i++;
            }
        }
        ar.clear();
    }

    return 0;
}