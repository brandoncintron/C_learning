#include <stdio.h>

#define TAX_PERCENTAGE 0.065
#define YOGURT_COST .49

int main(void){
    // The price of frozen yogurt at Menchie’s is 49 cents/ounce + tax(6.5%)
    double dollars_available, yogurt_ratio;

    // Both input values will be real numbers in between 1 and 20
    printf("How many dollars do you have for frozen yogurt?: ");
    scanf("%lf", &dollars_available);

    printf("What is the ratio of yogurt that you’ll get compared to your child?: ");
    scanf("%lf", &yogurt_ratio);
    
    // determine the number of ounces of frozen yogurt both Arup and his step-daughter can get
    // Firstly, tax the dollars available
    dollars_available -= (TAX_PERCENTAGE * dollars_available);
    
    // Take the rest of the dollars available, and divide over .49 cents
    double amount_of_yogurt = dollars_available / YOGURT_COST;

    // When calculating ratios, adding the 1 to the ratio before dividing ensures accuracy
    double sd_yogurt = amount_of_yogurt / (1 + yogurt_ratio);
    double arup_yogurt = yogurt_ratio * sd_yogurt;

    printf("You will get %.2lf ounces of yogurt.\n", arup_yogurt);
    printf("Your child will get %.2lf ounces of yogurt.\n", sd_yogurt);

    return 0;
}