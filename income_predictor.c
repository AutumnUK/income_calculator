#include <stdio.h>
// A little tool for calculating how much money I will earn.

const   float   rate    = 11.8;
const   float   tax     = 0.95;
const   float   rent    = 200;
const   char    gbp     = 156;
        float   hours;
        float   income;


void calculate(float i){
    hours = i;
    income = (hours * rate) * tax;

    if (hours > 0){
        printf( "You earn approximately %c%4.2f, which leaves you with %c%4.2f after rent.", gbp, (income), gbp, (income - rent ) );
    } else {
        printf("Enter a non zero positive value."); 
    }
}

int main() {
    printf("Enter hours worked : ");
    scanf("%f", &hours);   
    calculate(hours);
    return 0;
}