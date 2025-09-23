#include <stdio.h>
int main(){
int population = 1000;
int year;
printf("Population growth for 10 years:\n");
for (year = 1; year <= 10; year++){
population = population + (population / 10);
printf("Year %d: %d\n", year, population);}

return 0;
}
