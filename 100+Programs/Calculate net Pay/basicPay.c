#include <stdio.h>
/*-----------------------------------*/
//  Function declaration
/*-----------------------------------*/
float taxPaid(bsPay);
void basicPay();
void employeeInput();
float calcNetPay();


/*-----------------------------------*/
// creating a employee structure template
/*-----------------------------------*/

struct employee
{
    char firstname[64];
    char lastname[64];
    float hoursWorked;
    float ratePerHour;
} emp;

/*-----------------------------------*/
//  Global Variables
/*-----------------------------------*/

float tax, netPay;
int bsPay;



/*-----------------------------------*/
//           Main function
/*-----------------------------------*/
int main()
{

    employeeInput();

    dispOutput();

}


/*-----------------------------------*/
//     Output
/*-----------------------------------*/

void dispOutput(){
    printf("\n\n\n%s %s Details: ",emp.firstname ,emp.lastname);
    printf("\nBasic Pay: %d", bsPay);
    printf("\nTax: %.2f", tax);
    printf("\nNet Pay: %.2f", netPay);


}



/*-----------------------------------*/
//      Users Input
/*-----------------------------------*/

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

    // Call basic pay function
    basicPay();
}

/*-----------------------------------*/
//  Calculating Basic Pay
/*-----------------------------------*/

void basicPay()
{

    bsPay = (emp.hoursWorked * emp.ratePerHour);

    //call tax
    taxPaid(bsPay);
    return bsPay;
}

/*-----------------------------------*/
// Calculate Tax
/*-----------------------------------*/

float taxPaid(bsPay)
{



    if (bsPay > 50000)
    {
        tax = 0.2 * bsPay;

    }
    else if (bsPay >= 20000 && bsPay <= 50000)
    {
        tax = 0.1 * bsPay;

    }
    else
    {
        tax = 0.00;

    }

    //call net pay
    calcNetPay();

    return tax;
}


/*-----------------------------------*/
// Calculate Net Pay
/*-----------------------------------*/

float calcNetPay(){
     return netPay = bsPay - tax;

}



//  Using Switch
/*

    switch(bsPay)
    {
    case (bsPay > 50000):
        tax = (20/100) * bsPay;
    case (bsPay  >= 20000 && bsPay <= 50000):
        tax = (20/100) * bsPay;
    default:
        tax = 0.00;
    }

*/



