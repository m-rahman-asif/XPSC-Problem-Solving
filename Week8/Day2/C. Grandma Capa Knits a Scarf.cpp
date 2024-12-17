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
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int>m;
        map<char, int>m2;

        for(char i='a'; i<='z'; i++)
        {
            int l=0, r=n-1;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]!=s[r])
                {
                    if(s[l]==i || s[r]==i)
                    {
                        if(s[l]==i)
                            l++;
                        else if(s[r]==i)
                            r--;
                        m[i]++;
                    }
                    else
                    {
                        m2[i]=1;
                        break;
                    }
                }
            }
        }
        int f=0;
        set<int>st;
        for(char i='a'; i<='z'; i++)
        {
            if(m2[i]==0)
                st.insert(m[i]);
        }
        if(st.empty()==1)
            cout<<-1<<endl;
        else
            cout<<*st.begin()<<endl;




    }


    return 0;
}







