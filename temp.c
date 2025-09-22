#include <stdio.h>
int main(){
float celcious,fahrenheit;
printf("enter the tempter in celcious :");
scanf("%f",&celcious);

fahrenheit = (celcious*9/5)+32;
printf("the temp in fahrenheit is : %.2f",fahrenheit);
return 0;
}