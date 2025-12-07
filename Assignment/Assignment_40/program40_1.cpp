#include<iostream>
using namespace std;

void Display(int no)
{
     int iCnt = 0;

    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        cout << " * ";
    }


    
}

int main()
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}