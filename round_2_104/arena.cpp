#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,n,t,i,winners=0;
    bool isdiff=false;
    vector<int> levels;
    cin>>cases;

    for(int z=0;z<cases;z++)
    {
        cin>>n;
        winners=0;
        isdiff=false;
        for(int l=0;l<n;l++)
        {
            cin>>t;
            levels.push_back(t);
        }
        sort(levels.begin(),levels.end());
        for(i=0;i<n-1;i++)
        {
            if(levels[i]!=levels[i+1])
            {
                isdiff=true;
            }
            if(levels[i]!=levels[i+1])
            {
                winners++;
            }
            else if(isdiff)
            winners++;
        }
        cout<<winners<<endl;
        levels.clear();
    }



    return 0;
}