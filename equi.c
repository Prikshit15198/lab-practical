#include <stdio.h>
int main(){
float a,b,c;
printf("enter the 1 side : ");
scanf("%f",&a);
printf("enter the 2 side : ");
scanf("%f",&b);
printf("enter the 3 side :");
scanf("%f",&c);
if(a==b && b==c && c==a){
    printf("the triangle is valid");
}
else{ printf("the triangle is not valid");
}
if(a==b && b==c && c==a){
    printf("the triangle is equilateral");
}
else if (a==b || b==c || c==a){
    printf("the triangle is isosceles");
}
else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
    printf("the triangle is right angled");
}
else {
    printf("the triangle is scalene");
}

return 0;
}