
// accept one  number from user and checkwheather number 8 aahe ka nai.
#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{    
    
     int iDigit = 0;
     bool bFlag = false;


    while(iNo != 0)        // jo paryant 0 hot nai
    {
        iDigit = iNo % 10;    // 10 ha decimal ha base
        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }    
        iNo = iNo / 10;
    }

    return bFlag;
 
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckDigit(iValue);

    if(bRet == true)
    {
        printf("Digit 8 is present in number\n");
    }
    else
    {
        printf("Digit 8 is not present in number\n");
    }

    return 0;
}