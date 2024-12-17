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
        int i, n, o=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0; i<s.size()-1; i++)
        {
            if(s.size()==1)
                break;
            if(s.empty()==1)
                break;
            if((s[i]=='0' && s[i+1]=='1')||(s[i]=='1' && s[i+1]=='0'))
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                i--;
                i--;
                o++;
            }
            if(i<-1)
                i=-1;
        }
        if(o%2==0)
            cout<<"Ramos"<<endl;
        else
            cout<<"Zlatan"<<endl;



    }



    return 0;
}







