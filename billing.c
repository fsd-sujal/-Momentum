#include <stdio.h>

main() {
    int units, bill, surcharge, totalBill;

    printf("Enter the total units: ");
    scanf("%d", &units);

    if (units <= 50) 
	{
        bill = units * 0.50;
        
    }
	 else if (units <= 150) 
	 {
        bill =(units - 50) * 0.75 +25;
    } 
	else if (units <= 250) 
	{
        bill =(units - 150) * 1.20 +100;
    } 
	else 
	{
        bill =(units - 250) * 1.50 +220;
    }

    surcharge = bill * 0.20; // Calculating surcharge (20% of the bill)

    totalBill = bill + surcharge; // Adding surcharge to the bill

    printf("Total electricity bill: %d\n", totalBill);

}

