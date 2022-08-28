//
// Created by 박민건 on 2022/06/30.
//
#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    int line = 0;
    char arr[5];
    freopen(INPUT,"r",stdin);
    scanf("%d",&line);
    scanf("%s",arr);
    scanf("%s",arr);

    fclose(stdin);

    // printf("%d\n",arr[0]);
    printf("%s",arr);
    


    // printf("%d\n",arr[0]/10000);
    // printf("%d",arr[0]%10000/1000);
    // printf("%d",arr[0]%1000/100);
    // printf("%d",arr[0]%100/10);
    // printf("%d",arr[0]%10/1);

    freopen(OUTPUT,"w",stdout);

    fclose(stdout);
    return 0;
}