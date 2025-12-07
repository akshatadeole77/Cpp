#include<iostream>
using namespace std;

int Fact(int iNo)
{
    int iFact = 0;

    while(iNo < 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
    
    


    
}

int main()
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Fact(iValue);
    return 0;
}