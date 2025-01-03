#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s1, s2, i, j, k;
    cin>>s1;
    map<long long int, long long int>m;
    long long int a1[s1], sum1=1, sum2=0;
    for(i=0; i<s1; i++)
    {
        cin>>a1[i];
        sum2+=a1[i];
    for(j=sum1; j<=sum2; j++)
        m[j]=i+1;
    sum1=sum2+1;
    }
    cin>>s2;
    long long int a2[s2];
    for(i=0; i<s2; i++)
    {
        cin>>a2[i];
        cout<<m[a2[i]]<<endl;
    }

    return 0;
}
