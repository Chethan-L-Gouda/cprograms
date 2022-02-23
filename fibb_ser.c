#include<stdio.h>

int main(){
	long long int cur,pre=1,n,ppre=0;
	printf("Enter the number of elements in the series : ");
	scanf("%d",&n);
	printf("%d  %d",ppre,pre);
	for(int i = 2;i < n;i++)
	{
		cur = pre +ppre;
		printf("  %ld",cur);
		ppre=pre;
		pre=cur;
	}
	return 0;
}