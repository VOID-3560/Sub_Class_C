//26-09-2024

#include <stdio.h>

// Function to calculate interest
float calculate_Interest(char accType, float bal)
{
    float Int_Rate = 0;
    switch (accType)
    {
        case 'S':Int_Rate = (bal >= 500000) ? 5.0 : 8.0;
            break;
        case 's':Int_Rate = (bal >= 500000) ? 5.0 : 8.0;
            break;

        case 'C':Int_Rate = (bal >= 300000) ? 7.0 : 12.0;
            break;
        case 'c':Int_Rate = (bal >= 300000) ? 7.0 : 12.0;
            break;

        default:
            printf("Invalid account type.\n");
            return -1;
    }

    return (bal * Int_Rate) / 100;
}

int main()
{
    char accType;
    float bal, interest;

    // getting input from user 
    printf("Enter account type ( S [saving] , C [current] ): ");
    scanf(" %c", &accType);
    printf("Enter balance: ");
    scanf("%f", &bal);

    // clculate interest
    interest = calculate_Interest(accType, bal);
    // giving result
    printf("The interest applicable on your account is: %.2f\n", interest);

    return 0;
}