#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ser=0;
    cin>>t;
    set<pair<int, int>>m;
    set<pair<int, int>>p;
    vector<int>v;
    while(t--)
    {
        int a, b;
        cin>>a;
        if(a==1)
        {
            ser++;
            cin>>b;
            m.insert({ser, b});
            p.insert({b, -ser});
        }
        if(a==2)
        {
            v.push_back(m.begin()->first);
            p.erase( {m.begin()->second,  -(m.begin()->first)  } );
            m.erase( {m.begin()->first,  m.begin()->second  } );
        }
        if(a==3)
        {
            v.push_back(-p.rbegin()->second);
            m.erase( {-p.rbegin()->second,  p.rbegin()->first  } );
            p.erase( {p.rbegin()->first,  p.rbegin()->second  } );
        }
    }
    for(auto u:v)
        cout<<u<<" ";
    cout<<endl;


    return 0;
}




