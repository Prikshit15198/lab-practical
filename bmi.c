#include <stdio.h>
int main(){
    float weight,height,bmi;
printf("enter the weight in kg : ");
scanf("%f",&weight);
printf("enter the  height in meter : ");
scanf("%f",&height);
bmi= weight / (height * height);
printf("your bmi is : %.2f\n",bmi);
if(bmi<18.5){
    printf("you are underweight");
}
else if(bmi>18.5 && bmi<24.9){
printf("you are normal weight");}
else if(bmi>25 && bmi<29.9){
printf("you are over weight");}
else{
    printf("you are obese");
}
return 0;}
