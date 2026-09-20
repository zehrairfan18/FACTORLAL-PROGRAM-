#include<stdio.h>
int main() {
int num,i;  
	long fact=1;
	printf("enter a number: ");
	scanf("%d",&num);
	for (i=1; i<=num; i++){
		fact=fact*i;
	}
printf("Factorial of %d = %ld\n", num, fact);
	return 0;
	
	
}








