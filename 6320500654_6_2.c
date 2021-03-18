#include<stdio.h>
int main()
{
    int n,i,j,x,z,k=0,n1=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<2;i++)
    {
        scanf("%d",&num[i]);
    }
    for(j=0;j<n;j++)
    {
            x=num[0]%10;
            num[0]/=10;
            z=num[1]%10;
            num[1]/=10;
            if(x==z)
            {
                n1++;
            }
            else{
                k++;
            }

    }
    printf("%d %d",n1,k);
    return 0;
}
