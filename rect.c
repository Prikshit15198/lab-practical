#include <stdio.h>
int main(){

float length,breadth,perimeter,area;
printf("enter the length of rectangle :");
scanf("%f",&length);
printf("enter the bredth of rectangle : ");
scanf("%f",&breadth);

perimeter = 2*(length+breadth);
area = length* breadth;
printf("the perimeter of rectangle is : %.2f",perimeter);
printf("\nthe area of rectangle is : %.2f",area);
return 0;
}