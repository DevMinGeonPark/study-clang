#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    float arr[12];
    float sum;
    freopen(INPUT,"r",stdin);
    for(int i=0; i<13; i++) {
        scanf("%f\n",&arr[i]);
        sum += arr[i];
    }
    fclose(stdin);

    freopen(OUTPUT,"w",stdout);
    printf("%0.2f",sum/12);
    fclose(stdout);
    
    return 0;
}