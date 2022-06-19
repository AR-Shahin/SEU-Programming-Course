#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    if(n > 0){
        printf("Positive Number");
    }
    else if(n < 0){
        printf("Negative Number");
    }
    else if (n == 0)
    {
        printf("Number is Zero");

    }
    

    return 0;
}
