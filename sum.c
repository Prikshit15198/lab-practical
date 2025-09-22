
#include <stdio.h>
int main(){
	int num1,num2,sum,multiply,subtract;
	float divide;
	printf("enter  first number : ");
	scanf("%d",&num1);
	printf("enter second number : ");
	scanf("%d",&num2);
	sum = num1 + num2;
	multiply = num1*num2;
	subtract = num1-num2;
	divide = (float)num1/num2;
	printf("the sum of two number is : %d\n",sum);
	printf("the multiply of two number is : %d\n",multiply);
	printf("the difference of two sum is : %d\n",subtract);
    printf("the division of two  number is : %.2f\n",divide);
    return 0;
}