#include <stdio.h>

int main()
{

    int mark;
    scanf("%d",&mark);
    
    if(mark >= 80 && mark <= 100){
        printf("A+");
    }
    else if(mark >= 75 && mark <= 79){
        printf("A");
    }
    else if(mark >= 70 && mark <= 74){
        printf("A-");
    }
    else if(mark >= 70 && mark <= 74){
        printf("A-");
    }

    else if(mark >= 65 && mark <= 69){
        printf("B+");
    }

    else if(mark >= 60 && mark <= 64){
        printf("B");
    }
     else if(mark >= 55 && mark <= 59){
        printf("B-");
    }

    // I skipped a couple of conditions 
    
    else if(mark >= 0 && mark < 40){
        printf("F");
    }
    return 0;
}
// . [100 – 80 = ‘A+’, 75 – 79 = ‘A’, 70 – 74 = A-, 65 – 69 = B+, 60 – 64 = B, 55 -59 = B-, 50 – 54 = C+, 45 – 49 = C, 40 – 44 = D, 0 – 39 = F]