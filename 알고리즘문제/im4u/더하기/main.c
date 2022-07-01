#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    // char ch;
    freopen(INPUT,"r",stdin);
    fclose(stdin);

    freopen(OUTPUT,"w",stdout);
    fclose(stdout);
    return 0;
}