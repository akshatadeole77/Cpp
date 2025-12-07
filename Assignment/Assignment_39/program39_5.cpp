#include<iostream>
using namespace std;

void Display(char ch)
{
    int iCnt = 0;

    for(iCnt = ch; iCnt >= 'a'; iCnt--)
    {
        cout << "%c\t" << ch;
    }


    
}

int main()
{
    char ich = ' ';

    printf("Enter a character: ");
    scanf(" %c", &ich);

    Display(ich);

    return 0;
}