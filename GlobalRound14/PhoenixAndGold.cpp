#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,cases,tmp,sum,current_sum,flag,j,tobreak=0,printed=0;
    vector<int> weights;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        cin>>x;
        sum=0;
        current_sum=0;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            weights.push_back(tmp);
            sum+=tmp;
        }
        printed=0;
        if(sum==x)
        {
            cout<<"NO"<<endl;
            weights.clear();
            continue;
        }

        flag=0;
        tobreak=0;
        for(i=0;i<n;i++)
        {
            current_sum=accumulate(weights.begin(),weights.begin()+i+1,0);
            j=n-i-1;
            while(current_sum==x && j>=i )
            {
                if(j==i)
                {
                    tobreak=1;
                    break;
                }
                swap(weights[i],weights[j]);
                current_sum=accumulate(weights.begin(),weights.begin()+i+1,0);
                j--;
            }
            
            if(tobreak==1)
            break;
        }

        if(tobreak==1)
        cout<<"NO"<<endl;
        else if(i>=n)
        {
             cout<<"YES"<<endl;
                for(i=0;i<n;i++)
                cout<<weights[i]<<" ";
                cout<<endl;   
        }

        weights.clear();


    }
    return 0;
}