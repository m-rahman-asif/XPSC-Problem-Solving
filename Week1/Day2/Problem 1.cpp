#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, s, ser=0, dim=0;
    cin>>s;
    vector<int>v(s);
    for(i=0; i<s; i++)
        cin>>v[i];
    for(i=1; i<=s; i++)
    {
        if(i%2==0)
        {
            if(*v.begin()>*(v.end()-1))
            {
                ser+=*v.begin();
                v.erase(v.begin());
            }
            else
            {
                ser+=*(v.end()-1);
                v.pop_back();
            }
        }
        else
        {
            if(*v.begin()>*(v.end()-1))
            {
                dim+=*v.begin();
                 v.erase(v.begin());
            }
            else
            {
                dim+=*(v.end()-1);
                v.pop_back();
            }
        }
    }
    cout<<dim<<" "<<ser<<endl;
    return 0;
}


