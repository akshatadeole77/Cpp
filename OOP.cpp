#include <iostream>
using namespace std;

class Arithematic
{
    public:
        int ino1;
        int ino2;

        Arithematic()    //Default constructor
        {
            ino1=0;
            ino2=0;
        }

        Arithematic(int a, int b)        //parameterized constructor
        {
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
    
    int iret=0;

    iret=aobj.Addition();
    cout<<"Addition is: "<<iret<<"\n";

     iret=aobj.substraction();
    cout<<"substraction is: "<<iret<<"\n";




    return 0;
}


