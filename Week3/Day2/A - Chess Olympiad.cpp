#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w, d, l, mr, pn;
    float mp=0, op=0;
    cin>>w>>d>>l;
    mr=4-w-d-l;
    mp+=w;
    mp+=d*0.5;
    op+=l;
    op+=d*0.5;
    mp+=mr;
    if(mp>op)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}





