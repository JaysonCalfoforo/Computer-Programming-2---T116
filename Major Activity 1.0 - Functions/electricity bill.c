#include <stdio.h>
int computeChargePerUnit(int unitConsumed)
{
    int chargePerUnit = 0.00;
    if (unitConsumed > 0 && unitConsumed < 250)
    {
        chargePerUnit = 1.50;
    }
    else if (unitConsumed >= 250 && unitConsumed < 450)
    {
        chargePerUnit = 1.60;
    }
    else if (unitConsumed >= 450 && unitConsumed < 600)
    {
        chargePerUnit = 1.85;
    }
    else if (unitConsumed >= 600)
    {
        chargePerUnit = 2.00;
    }
    return chargePerUnit;
}
int computeCharge(int unitConsumed, float chargePerUnit)
{
    float charge;
    charge = unitConsumed * chargePerUnit;
    return charge;
}
int computeSurcharge(float charge)
{
    int surcharge = 0.00;
    if (charge > 400)
    {
        surcharge = charge * 0.1;
    }
    return surcharge;
}
int computeTotalBill(float charge, float surCharge)
{
    int total;
    total = charge + surCharge;
    return total;
}
int main()
{
    int customerId, unitConsumed;
    float chargePerUnit, charge, surCharge, total;
    printf("Input Customer ID: ");
    scanf("%d", &customerId);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &unitConsumed);
    chargePerUnit = computeChargePerUnit(unitConsumed);
    charge = computeCharge(unitConsumed, chargePerUnit);
    surCharge = computeSurcharge(charge);
    total = computeTotalBill(charge, surCharge);
    if (total > 100)
    {
        printf("\n[Electricity Bill]");
        printf("\nCustomer ID#                    :%d", customerId);
        printf("\nunit Consumed                   :%d", unitConsumed);
        printf("\nunit Charges @P. %.2f per unit  :P %.2f", chargePerUnit, charge);
        printf("\nSurcharge Amount                :P %.2f", surCharge);
        printf("\nTotal Customer Bill             :P %.2f", total);
       
    }
    else 
    {
    printf("Total bill must be above P100: ");
    }
    
    return 0;
    
    
    
}
