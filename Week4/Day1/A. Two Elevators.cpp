#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int counta=0, countb=0;
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        counta=a-1;
        if(c>b)
        countb+=c-b+c-1;
        else
        countb=b-1;
        if(counta<countb)
        printf("1\n");
        if(counta>countb)
        printf("2\n");
        if(counta==countb)
            printf("3\n");

    }




    return 0;
}
