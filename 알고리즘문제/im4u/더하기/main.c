#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    int count, temp, sum = 0;

    freopen(INPUT,"r",stdin);
    scanf("%d", &count);
    for (int i=0; i<count; i++) {
        scanf("%d",&temp);
        sum += temp;
    }
    fclose(stdin);

    freopen(OUTPUT,"w",stdout);
    printf("%d",sum);
    fclose(stdout);
    return 0;
}