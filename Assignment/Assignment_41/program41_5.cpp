#include<iostream>
using namespace std;

int Mult(int iNo)
{
    int iDigit = 0;
    int iProd = 1;

    while (iNo > 0)
    {
        iDigit = iNo % 10;  
        iProd = iProd * iDigit; 
        iNo = iNo / 10;  
    }
    
    return iProd;
    
    


    
}

int main()
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Mult(iValue);
    return 0;
}