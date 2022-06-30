// 수정 필요할듯.

#include <stdio.h>

#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

int main(void) {

    char ch[100];
    int count = 0;
    freopen(INPUT,"r",stdin);
    scanf("%[^\n]", ch);
    fclose(stdin);

    while (1) {
        if (ch[count]==0)
            break;
        if (ch[count]>'A' && ch[count]<'Z')
            ch[count] += 32;
        else if(ch[count]==32)
            printf("It is space\n");
        else
            ch[count] -= 32;
        count++;
    }

    freopen(OUTPUT,"w",stdout);
    printf("%s",ch);
    fclose(stdout);
    
    return 0;
}

