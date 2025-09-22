#include <stdio.h>
int main(){
int x1,y1,x2,y2,x3,y3,area;
printf("enter the x1 and y1 value : ");
scanf("%d %d",&x1,&y1);
printf("enter the x2 and y2 value :");
scanf("%d %d" ,&x2,&y2);
printf("enter the x3 and y3 value :");
scanf("%d %d",&x3,&y3);
area = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
if(area==0){
printf("the triangle is colliner");
}
else {printf("it is not colliber");}
return 0;
}