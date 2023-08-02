// accept number from user and check whether number palingdrome or nor 
// palingdrome string ahe
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)

{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;         //important statement

        iNo = iNo / 10;
    }
    if(iReverse == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;      // return ghenya sathi

    printf("Enter number : \n");
    scanf("%d",&iValue);

   
    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a pallindrome number\n",iValue);
    }
    else
    {
         printf("%d is not a pallindrome number\n",iValue);
    }
    return 0;
}