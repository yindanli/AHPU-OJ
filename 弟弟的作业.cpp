#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],b[100],c[100],i=0,n=0;
    char d[100],f[100];
    while(scanf("%d%c%d%c%d",&a[i],&d[i],&b[i],&f[i],&c[i])!=EOF)
    {
    getchar();
    if(d[i]=='+'&&a[i]+b[i]==c[i]||d[i]=='-'&&a[i]-b[i]==c[i])
    {
              n++;
              i++;
    }
    }
    printf("%d\n",n);
    return 0;
}
