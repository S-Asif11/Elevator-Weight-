#include<stdio.h>
//1 + 11 + 111 + 1111 + 11111 = ________
int main() {
	int n,x = 1,sum = 0; // 1 * 10 +1 = 11 * 10 + 1 = 111*10 +1
	printf("Enter n value : ");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++) {
		if(i==n) {
			printf("%d ",x);
		}else {
			printf("%d + ",x);
		}
		sum+=x;
		x = x*10+1;
	}
	printf(" = %d",sum);
}
