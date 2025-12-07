#include<iostream>
using namespace std;

void Display(int no)
{
     int iCnt = 0;
     char ch = 'A';

    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        cout << " %c\t " << ch;
        iCnt++;
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