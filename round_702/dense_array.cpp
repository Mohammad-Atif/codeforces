#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,i,j,tmp,numbers=0,maxx,minn;
    float f_max,f_min;
    vector<int>  arr;

    cin>>cases;
    for(int z=0;z<cases;z++)
    {
        cin>>n;
        numbers=0;
        for(i=0;i<n;i++)
        {
            cin>>tmp;
            arr.push_back(tmp);
        }
        for(i=0;i<n-1;i++)
        {
            maxx=max(arr[i],arr[i+1]);
            minn=min(arr[i],arr[i+1]);
            f_max=maxx;
            f_min=minn;
            while(f_max/f_min>2)
            {
                if(maxx%2==0)
                {
                    maxx=maxx/2;
                }
                else
                {
                    maxx=(maxx/2)+1;
                }
                numbers++;
                f_max=maxx;
            }
        }
        cout<<numbers<<endl;
        numbers=0;
        arr.clear();

    }



    return 0;
}