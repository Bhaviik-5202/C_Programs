/* Input electricity unit charge and calculate the total electricity bill according
to the given condition:
*/

#include <stdio.h>
int main()
{
    float units, bill, additional_surcharge;

    // Input electricity unit charges
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate the bill according to the defined rates
    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add additional surcharge of 20%
    additional_surcharge = bill * 0.20;
    bill += additional_surcharge;

    // Print the total bill
    printf("Total electricity bill: %.2f\n", bill);

    return 0;
}