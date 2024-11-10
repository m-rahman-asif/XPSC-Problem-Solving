#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        int sz1=s1.size(), sz2=s2.size();
        if( (sz1==sz2 && (s1[sz1-1]==s2[sz2-1]))  ||  (s1[sz1-1]=='M' && s2[sz2-1]=='M') )
            cout<<"=";
        else
        {
            if( s1[sz1-1]==s2[sz2-1] && s1[sz1-1]=='S')
            {
                if(sz1>sz2)
                    cout<<"<";
                else
                    cout<<">";
            }
            if( s1[sz1-1]==s2[sz2-1] && s1[sz1-1]=='L')
            {
                if(sz1>sz2)
                    cout<<">";
                else
                    cout<<"<";
            }
            if( s1[sz1-1]=='L' && s2[sz2-1]=='S')
            {
                    cout<<">";
            }
            if( s1[sz1-1]=='S' && s2[sz2-1]=='L')
            {
                    cout<<"<";
            }
            if( s1[sz1-1]=='S' && s2[sz2-1]=='M')
            {
                    cout<<"<";
            }
            if( s1[sz1-1]=='M' && s2[sz2-1]=='S')
            {
                    cout<<">";
            }
            if( s1[sz1-1]=='M' && s2[sz2-1]=='L')
            {
                    cout<<"<";
            }
            if( s1[sz1-1]=='L' && s2[sz2-1]=='M')
            {
                    cout<<">";
            }
        }



cout<<endl;



    }



    return 0;
}
