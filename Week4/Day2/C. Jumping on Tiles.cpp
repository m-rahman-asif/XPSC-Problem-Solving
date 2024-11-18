#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mc=1;
    map<char, int>m;
    for(char j='a'; j<='z'; j++)
    {
        m[j]=mc;
        mc++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i, cost=0;
        cin>>s;
        char cmx,cmn;
        cmx=max(s[0], s[s.size()-1]);
        cmn=min(s[0], s[s.size()-1]);

        vector<pair<char, int>>v;
        string s2;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]<=cmx && s[i]>=cmn)
            {
                v.push_back({s[i], i});
                s2.push_back(s[i]);
            }
        }
        sort(v.begin()+1, v.end()-1);




        if(s[0]<s[s.size()-1])
        {

            for(i=1; i<v.size()-1; i++)
            {
                cost+=abs(  m[v[i].first]-m[v[i-1].first]);
            }

            cost+=abs(  m[v[v.size()-1].first]-m[v[v.size()-2].first]);
        }
        else
        {

            for(i=v.size()-2; i>0; i--)
            {
                if(i==v.size()-2)
                {
                    cost+=abs(  m[v[0].first]-m[v[i].first]);
                }
                else
                {

                    cost+=abs(  m[v[i].first]-m[v[i+1].first]);
                }


            }

            cost+=abs(  m[v[1].first]-m[v[v.size()-1].first]);


        }

        if(v.size()>2)
        cout<<cost<<" "<<v.size()<<endl;
        else
        cout<<abs(m[v[0].first]-m[v[1].first])<<" "<<v.size()<<endl;

        if(s[0]<s[s.size()-1])
        {
            cout<<1<<" ";

            for(i=1; i<v.size()-1; i++)
            {
                cout<<v[i].second+1<< " ";

            }
            cout<<s.size()<<endl;
        }
        else
        {
            cout<<1<<" ";

            for(i=v.size()-2; i>0; i--)
            {
                cout<<v[i].second+1<< " ";

            }

            cout<<s.size()<<endl;
        }





    }





    return 0;
}







