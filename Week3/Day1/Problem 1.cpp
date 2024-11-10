#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int a, l;
        scanf("%d", &a);
        char s[a+1];
        scanf("%s", &s);
        l=strlen(s);
        for(j=0; j<l; j++)
        {
            if (((s[j]=='1') && (s[l-1]=='0')) || ((s[j]=='0') && (s[l-1]=='1')))
            {
                s[j]='2';
                s[l-1]='2';
                l--;
            }
            else
                break;
        }
        int c=0;
        for(j=0; j<strlen(s); j++)
        {
            if(s[j]=='0' || s[j]=='1')
                c++;
        }
        printf("%d\n", c);
    }
    return 0;

}
