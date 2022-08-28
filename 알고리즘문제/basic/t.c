//
// Created by 박민건 on 2022/06/30.
//
#include <stdio.h>
int main(void) {

    float a=0, b=0;
    int k=1;
    char a="y";
    while(k) {
        printf("첫 번째 수는?");
        scanf("%f",&a);
        printf("두 번째 수는?");
        scanf("%f",&b);

        printf("계속할까요?(y/n)");
        scanf("%c",&a);
        if (a=="n") {
            k=0;
        }
    }
    

    return 0;
}

