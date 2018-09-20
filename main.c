#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Prompt the user for celsius
    printf("Please enter degrees in Celsius: ");
    //Accept user input and store in celsius variable.

    float celsius;
    scanf("%f", &celsius);

    //Perform temp conversion
    float farhrenheit;
    farhrenheit = ( (celsius * 9) / 5  ) + 32;
    //Display results to console.

    printf("%.2f F\n", farhrenheit);
    return 0;
}
