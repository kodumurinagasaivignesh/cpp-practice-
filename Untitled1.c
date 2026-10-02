
#include <stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int a[N],i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
}
