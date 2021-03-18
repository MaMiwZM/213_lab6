#include<stdio.h>
int main()
{
    int n,i,j,q,z=0,ka,x=0,k=0;
    char c;
    scanf("%d %d",&n,&q);
    int N[q],store[q];
    fflush(stdin);
    for(i=0; i<q; i++)
    {
        N[i]=0;
        store[i]=0;
    }
    for(i=0; i<q; i++)
    {
        scanf(" %c %d %d",&c,&z,&x);
        if(c=='U')
        {
            N[z]=x;
        }
        else if(c=='P')
        {
            for(j=z; j<=x; j++)
            {
                if(N[j]>N[j+1])
                {
                    store[k]=N[j];
                    k++;
                }
            }
        }
    }
    for(i=0; i<k; i++)
    {
        printf("%d\n",store[i]);
    }

    return 0;
}
