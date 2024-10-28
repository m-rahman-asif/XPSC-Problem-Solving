#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, q, i;
    cin>>d>>q;
    string s1, s2, s11, s22;
    map < string, string > m;
    for(i=1; i<=d; i++)
    {
        cin>>s1>>s2;
        m[s2]=s1;
    }
    for(i=1; i<=q; i++)
    {
        cin>>s11>>s22;
        cout<<s11<<" "<<s22;
        s22.pop_back();
        cout<<" #"<<m[s22]<<endl;


    }




    return 0;
}
