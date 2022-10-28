#include <stdio.h>

//  Function declaration
float taxPaid();
void displayPay();
void basicPay();
void employeeInput();



// creating a employee structure template
struct employee
{
    char firstname[64];
    char lastname[64];
    float hoursWorked;
    float ratePerHour;
} emp;

// Global Variables
float tax, netPay;
int bsPay;


//  Main function
int main()
{
    bsPay = 2324000;
    tax = 10.00;


       tax = 0.2 * bsPay;
         printf("%.2f", tax);
}

//  Users Input
void employeeInput()
{
    printf("Enter First Name: ");
    scanf("%s", emp.firstname);

    printf("Enter Last Name: ");
    scanf("%s", emp.lastname);


    printf("Enter Hours Worked: ");
    scanf("%f", &emp.hoursWorked);

    printf("Enter Rate per Hour: ");
    scanf("%f", &emp.ratePerHour);

}


//  Calculating Basic Pay
void basicPay()
{
    bsPay = (emp.hoursWorked * emp.ratePerHour);
    return bsPay;
}


// Calculate Tax

float taxPaid(bsPay)
{
    bsPay = 2324000;


    if (bsPay > 50000)
    {
       tax = (20/100) * bsPay;
         printf("%.2f", tax);
    }
    else if (bsPay >= 20000 && bsPay <= 50000)
    {
        tax = (10/100) * bsPay;
          printf("%.2f", tax);
    }
    else
    {
         tax = 0.00;
           printf("%.2f", tax);
    }


}


    // Using Switch
//    switch(bsPay)
//    {
//    case (bsPay > 50000):
//        tax = (20/100) * bsPay;
//    case (bsPay  >= 20000 && bsPay <= 50000):
//        tax = (20/100) * bsPay;
//    default:
//        tax = 0.00;
//    }



void displayPay(bsPay,tax)
{
    netPay = bsPay - tax;
    printf("%.2f", netPay);
}
