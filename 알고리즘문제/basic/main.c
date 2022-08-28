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

    

    return 0;
}

