//user kdun number gheun digit split krnar   // whille loop use kela
#include<stdio.h>


void DisplayDigits(int iNo)
{
   
    int iDigit = 0;


    while(iNo != 0)        // jo paryant 0 hot nai
    {
        iDigit = iNo % 10;    // 10 ha decimal ha base
        printf("%d\n",iDigit);
        iNo = iNo / 10;      
    }
    
}
int main()
{
    int iValue = 0;           //user kddun number ghenar ttasathi variable

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);          // parameter nawin function la pathvto  // call by value mhnje ivalue nai janar 7854 janar
    return 0;
}



// op enter number 
// 7854
// op  4 5 8 7 as run houn yeil