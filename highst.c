#include <stdio.h>
int main(){
int l1,l2,l3,b1,b2,b3,p1,p2,p3;
printf("entre the lenght and bredth of 1 rect :");
scanf("%d %d",&l1 , &b1);
printf("the enter the  lenght and bredth of 2 rect : ");
scanf("%d %d",&l2 , &b2);
printf("the enter the lenght and breadth  3 rec ");
scanf("%d %d",&l3 ,&b3);

p1 = 2*(l1+b2);
p2 = 2*(l2 + b2);
p3 = 2*(l3 + b3);

if (p1 >= p2 && p1 >= p3){
    printf("the 1 rect has the highest perimeter : %d",p1);
}
else if (p2 >= p1 && p2 >= p3){
    printf("the 2 rect has the highest perimeter : %d",p2);
}
else {
    printf("the 3 rect has the highest perimeter : %d",p3);
}
return 0;}