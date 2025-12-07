#include<iostream>
using namespace std;

void Display(char ch)
{
    int iCnt = 0;

    for(iCnt = ch; iCnt >= 'A'; iCnt++)
    {
        cout << "\t" << ch;
    }


    
}

int main()
{
    char ich = ' ';

    printf("Enter a number: ");
    scanf("%c", &ich);

    Display(ich);

    return 0;
}