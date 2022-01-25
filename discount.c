#include <stdio.h>
#include <cs50.h>

float discount(float price);

int main(void)
{
    //for prepesent some regular product in a store...
    float regular = get_float("Regular Price: ");
    //taking off 15% we multiply the regular price by 0,85...
    float sale = discount(regular);
    printf("Sale Price: %.2f\n", sale);
}

//a function that return a float, and that function take one input , like the price that we whant to discount...
float discount(float price)
{
    return price * .85;
}