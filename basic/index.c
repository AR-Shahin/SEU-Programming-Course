#include <stdio.h>

int main()
{

    int sell,cost;
    scanf("%d%d",&sell,&cost);

    if(sell > cost){
        printf("Profit! %d",sell - cost);
    }else{
        printf("Loss! %d",cost - sell);

    }
    

    return 0;
}
