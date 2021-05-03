#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,i,tmp,c0,c1,c2,count;
    vector<int> arr;
    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        c0=0;
        c1=0;
        c2=0;
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%3==0)
            c0++;
            else if(arr[i]%3==1)
            c1++;
            else 
            c2++;
        }
        
        while(!(c0==c1 && c1==c2))
        {
            if(c0<c2)
            {
                c0++;
                c2--;
            }
            else if(c1<c0)
            {
                c1++;
                c0--;
            }
            else if(c2<c1)
            {
                c2++;
                c1--;
            }
            count++;
        }
        cout<<count<<endl;
        arr.clear();
    }

    return 0;
}