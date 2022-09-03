#include<stdio.h>

int main()
{

    int l,w;
    scanf("%d %d",&l,&w);

    while(l!=0 && w!=0)
    {

        float p = 0.2727 * l;
        float r = l - p;

        float temp = sqrt(pow(p,2)+pow(w,2));

        float ans = temp + r;

        printf("%.4f",ans);

        scanf("%d %d",&l,&w);

    }


    return 0;

}