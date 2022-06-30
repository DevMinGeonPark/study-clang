#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    char ch;
    freopen(INPUT,"r",stdin);
    scanf("%c",&ch);
    fclose(stdin);

    freopen(OUTPUT,"w",stdout);
    printf("%d",ch-64);
    fclose(stdout);

    return 0;
}

