#include<stdio.h>

int Addition(int ino1, int ino2)
{
    int ians=0;
    ians = ino1+ino2;
    return ians;
}
int substraction(int ino1, int ino2)
{
    int ians=0;
    ians = ino1-ino2;
    return ians;
}

int main()
{
    int iret=0;

    iret=Addition(11,10);
    printf("Addition is:%d\n",iret);

    iret=substraction(11,10);
    printf("substraction is:%d\n",iret);





    return 0;
}