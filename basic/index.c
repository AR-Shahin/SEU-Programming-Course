#include <stdio.h>

int main()
{

    char ch;
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }else{
        printf("Consonant!");
    }
    return 0;
}
// . [100 – 80 = ‘A+’, 75 – 79 = ‘A’, 70 – 74 = A-, 65 – 69 = B+, 60 – 64 = B, 55 -59 = B-, 50 – 54 = C+, 45 – 49 = C, 40 – 44 = D, 0 – 39 = F]