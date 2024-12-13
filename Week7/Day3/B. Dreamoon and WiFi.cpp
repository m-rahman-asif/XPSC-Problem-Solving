#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin>>s1>>s2;
    float sz=s1.size(), d=0, id=0, q=0, jp=0, jpn=0;
    for(int i=0; i<sz; i++)
    {
        if(s1[i]=='+')
            d++;
        else
            d--;
        if(s2[i]=='+')
            id++;
        else if(s2[i]=='-')
            id--;
        else if(s2[i]=='?')
            q++;
    }
    for(int i=0; i<pow(2, q); i++)
    {
        int des=id;
        for(int j=0; j<q; j++)
        {
            if(((i>>j)&1))
                des++;
            else des--;
        }
        if(des==d)
            jp++;
    }
    float f;
    printf("%.12f", jp/pow(2,q));



    return 0;
}







