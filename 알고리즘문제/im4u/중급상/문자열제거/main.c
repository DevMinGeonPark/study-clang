//
// Created by 박민건 on 2022/06/30.
//
#include <stdio.h>
#include <string.h>


#define INPUT "INPUT.txt"
#define OUTPUT "OUTPUT.txt"

void delete(char arr[], int startIdx, int endIdx) {
    // (int)strlen(arr)
    int i=startIdx;
    int j=endIdx;
    while(i<(int)strlen(arr)) {
        arr[i] = arr[j+1];
        printf("%c ",arr[i]);
        printf("%c\n",arr[j+1]);
        i++;
        j++;
    }
}
//\0 널문자
int main(void) {

    char ch[100];
    int instack[100] = {0,};
    int outstack[100] = {0,};
    int index = 0;
    freopen(INPUT,"r",stdin);
    scanf("%[^\n]", ch);
    fclose(stdin);
    // 개수 확인
    // printf("%d", (int)strlen(ch));

    freopen(OUTPUT,"w",stdout);
    for (int i=0; i<(int)strlen(ch)+1; i++) {
        if (ch[i]=='[') {
            instack[index++]=i;
            printf("%d\t",i);
        }
        if (ch[i]==']') {
            outstack[index++]=i;
            printf("t %d",i);
        }

    }
    delete(ch, instack[0], outstack[0]);
    for (int i=0; i<(int)strlen(ch); i++) {
        printf("%c",ch[i]);
    }
    
    fclose(stdout);

    return 0;
}

