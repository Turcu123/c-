#include <stdio.h>
#include <conio.h>
#include <mem.h>
using namespace std;
int a[20][20],d[20],i,j,k,n,x,y,min,imin;
char c[20],varf[20];

int main( )
{
    FILE *f;
    f=fopen("dijkstra.in", "r");
    if (f==NULL)
    {
        printf("Eroare la deschidere");
return 0;
    }
        fscanf(f,"%d",&n);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fscanf(f, "%d", &a[i][j]);

    fscanf(f,"%d",&x);
    memset(d, 0, sizeof(d));
    memset(varf,0,sizeof(varf));
    for(i=1; i<=n; i++)
    {
        c[i]=1;
        if(a[x][i]) varf[i]=x;
    }
    c[x]=0;
    for(i=1; i<=n; i++)
        if(c[i]) d[i]=a[x][i];
    for(y=1; y<=n; y++)
        if(x!=y)
        {
            for(k=1; k<=n-2; k++)
            {
                min=10000;
                for(i=1; i<=n; i++)
                    if(c[i]&& d[i]>0 && d[i]<min)
                    {
                        min=d[i];
                        imin=i;
                    }
                if (imin==y) break;
                c[imin]=0;
            }
        }
}
