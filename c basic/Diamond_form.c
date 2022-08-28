//마름모
#include <stdio.h>
int main() {
	int N, n;
	int count=1;
    printf("N=");
	scanf("%d", &N); //입력
	
	if(N%2==1)	n=N-1; //n이 홀수면 일단 짝수로 취급하여 생성
	else	n=N; // 짝수일 경우 그대로 진행
	
	//마름모 상단부.
	for(int i=1; i<=n/2; i++){
		for(int k=0; k<=n/2-i; k++){
			printf("   ");
		}
		for(int j=0; j<i*2-1; j++){
			printf(" %d ",count++);
		}
		printf("\n");
	}
    
	//입력값이 짝수일 경우와는 다르게 홀수일 경우 중간 줄에 *이 홀수개수인 줄이 추가된다.
	if(N%2==1){
		for(int i=0; i<N; i++){
			printf(" %d ",count++);
		}
		printf("\n");
	}
    
	//마름모 하단부. 상단부를 응용하여 작성했다.
	for(int i=n/2; i>0; i--){
		for(int k=n/2-i; k>=0; k--){
			printf("   ");
		}
		for(int j=i*2-1; j>0; j--){
			printf("%d ",count++);
		}
		printf("\n");
	}
	
	return 0;
}