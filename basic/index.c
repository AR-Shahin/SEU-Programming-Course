#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    
    // if(n%2==0){
    //     printf("eve");
    // }else{
    //     printf("odd");
    // }
   
    n % 2 == 0 ? "Even" : "Odd";
    

    return 0;
}
