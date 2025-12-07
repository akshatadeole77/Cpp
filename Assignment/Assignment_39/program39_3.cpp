#include<iostream>
using namespace std;

void Display(int no)
{
    int iCnt = 0;

     for(iCnt = no; iCnt >= 1; iCnt--)
    {
        cout << "\t" << iCnt;
    }


    
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    Display(value);


   
    return 0;
}