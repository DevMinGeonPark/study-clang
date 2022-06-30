//
// Created by 박민건 on 2022/06/30.
//
#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    char ch[100];
    int count = 0;
    freopen(INPUT,"r",stdin);
    scanf("%[^\n]", ch);
    fclose(stdin);

    

    freopen(OUTPUT,"w",stdout);
    
    if(*ch>='A' && *ch<='Z')
        printf("대문자");
    else
        printf("소문자");

    fclose(stdout);

    return 0;
}

