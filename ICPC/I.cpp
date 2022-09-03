#include<bits/stdc++.h>
using namespace std;

int main()
{

    int l,w;
    float ans;

    while(l!=0 && w!=0)
    {
   
    scanf("%d %d",&l,&w);

    float p = 0.2727 * l;
    float r = l - p;

    float temp = sqrt(pow(p,2)+pow(w,2));

    ans = temp + r;
    if(ans ==0.0000){
        break;
    }

    printf("%.4f",ans);

    }
    
    return 0;
}