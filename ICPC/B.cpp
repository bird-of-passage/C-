#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;

    int i=1;
    while(t--)
    {
        int a,b,c,k,s,x,y,z;
        scanf("%d %d %d %d",&a,&b,&c,&k);

        s = a+b+c;
        int m = s/3;
        if(s%3 != 0)
        {
            printf("Case %d: Fight\n",i);
        }
        else
        {
            x=abs(m-a);
            y=abs(m-b);
            z=abs(m-c);

            if(x%k == 0 && y%k == 0 && z%k == 0)
            {
                printf("Case %d: Peaceful\n",i);
            }
            else
            {
               printf("Case %d: Fight\n",i); 
            }
        }
        i++;

    }

    return 0;
}