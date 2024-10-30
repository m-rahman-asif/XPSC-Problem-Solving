#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    map<string, set<int>>m;
    string str;
    set<int>st;
    int i, n, j, f=0, s=0, t=0;
    cin>>n;
    set<string>st2;
    for(i=1; i<=3; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>str;
            st2.insert(str);
            m[str].insert(i);
        }
    }
    for(auto u:st2)
    {
       if(m[u].size()==1)
        {
            for(auto x:m[u])
            {
                if(x==1)
                    f+=3;
                else if(x==2)
                    s+=3;
                else
                    t+=3;
            }
        }
        else if(m[u].size()==2)
        {
            for(auto x:m[u])
            {
                if(x==1)
                    f+=1;
                else if(x==2)
                    s+=1;
                else
                    t+=1;
            }
        }
    }
    cout<<f<<" "<<s<<" "<<t<<endl;
    }

    return 0;
}


