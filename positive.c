<<<<<<< HEAD
#include <stdio.h>
int main() {
int num, positive = 0, negative = 0, zero = 0;
char choice;

for( ; ; ) {  
printf("Enter a number: ");
scanf("%d", &num);

if (num > 0){ positive++;}
else if (num < 0){ negative++;}
else{ zero++;}                             

printf("Do you want to enter the no. (y/n): ");
scanf(" %c", &choice);
if (choice == 'n'){
break;}
}
printf("Positive no. : %d\n", positive);
printf("negeative no,: %d\n", negative);
printf("Zeros: %d\n", zero);

return 0;
}
=======
#include <stdio.h>
int main() {
int num, positive = 0, negative = 0, zero = 0;
char choice;

for( ; ; ) {  
printf("Enter a number: ");
scanf("%d", &num);

if (num > 0){ positive++;}
else if (num < 0){ negative++;}
else{ zero++;}                             

printf("Do you want to enter the no. (y/n): ");
scanf(" %c", &choice);
if (choice == 'n'){
break;}
}
printf("Positive no. : %d\n", positive);
printf("negeative no,: %d\n", negative);
printf("Zeros: %d\n", zero);

return 0;
}
>>>>>>> b9f73458580001271e57b02b6b5ef670e9798dbc
