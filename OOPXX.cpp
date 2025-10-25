#include <iostream>
using namespace std;

class Arithematic
{
    public:
        int ino1;
        int ino2;

        Arithematic()    //Default constructor
        {
            cout<<"Inside default constructor\n";
            ino1=0;
            ino2=0;
        }

        Arithematic(int a, int b)        //parameterised constructor
        {
            cout<<"Inside parametrised constructor\n";
            ino1 = a;
            ino2 = b;

        }

        int Addition()
        {
            int ians=0;
            ians= ino1+ino2;
            return ians;
        }

        int substraction()
        {
            int ians=0;
            ians= ino1-ino2;
            return ians;
        }
};

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aboj2(21,20);
    
    int iret=0;

    iret=aobj1.Addition();
    cout<<"Addition is: "<<iret<<"\n";

     iret=aobj1.substraction();
    cout<<"substraction is: "<<iret<<"\n";

     iret=aobj2.Addition();
    cout<<"Addition is: "<<iret<<"\n";

     iret=aobj2.substraction();
    cout<<"substraction is: "<<iret<<"\n";





    return 0;
}