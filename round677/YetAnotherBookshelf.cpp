#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,i,j,n,first=0,ans,tmp,to_add;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        ans=0;
        to_add=0;
        first=0;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            if(tmp==1 && first==0)
                first=1;
            else if(tmp==0 && first==1)
                to_add++;
            else if(tmp==1 && first==1)
            {
                ans+=to_add;
                to_add=0;
            }    

        }
        cout<<ans<<endl;

    }

    return 0;
}
