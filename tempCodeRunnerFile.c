#include <stdio.h>

int main(){
    int N,a[N],v,y,z;
    y=0;
    scanf("%d",&N);
    for(int x=0; x<N; ++x)
    {
        scanf("%d",&a[x]);
    }
    scanf("%d",&v);
    for(int x=0;x<N;++x)
    {
        if (v==a[x])
        {
            y=y+1;
        }
    }
    printf("%d",y);
}