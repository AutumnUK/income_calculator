#include <stdio.h>
// A little tool for calculating how much money I will earn.

const   char    gbp     = 156;
const   float   rent    = 200;
const   float   rate    = 11.88;
        float   hours;

float net_calculator(float gross){
    const   float   weekly_cap  = 242.00;
    const   float   income_tax  = 0.20  ;
    const   float   ni          = 0.08  ;
            float   taxable ;
            float   paidni  ;
            float   paidtax ;
   
    if (gross <= 0)         { return 0;     }    
    if (gross < weekly_cap) { return gross; }

    taxable = (gross - weekly_cap);
    paidni  = (taxable * ni);
    paidtax = (taxable * income_tax);

    return (gross - paidni - paidtax);
}

float gross_calculator(float hours){
    return hours * rate;
}

float income_calculator(float hours) {
    float gross = gross_calculator(hours);
    return net_calculator(gross);
}

void income_predictor(){
    printf("Enter hours worked : ");
    scanf("%f", &hours);
    float   gross = gross_calculator(hours);
    float   net   = net_calculator(gross);
    printf("You will earn : %c%.2f\n" , gbp , income_calculator(hours));
}

int main() {
    income_predictor();
    return 0;
}