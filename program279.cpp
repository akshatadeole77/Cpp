//OOP Approach (Generic)

#include<iostream>
using namespace std;

template <class T>

class Arithematic
{
    public:
        T iNo1;
        T iNo2;

    Arithematic(T A,T B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    T Addition()
    {
        T Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    T Subtraction()
    {
        T Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
};

int main()
{
    Arithematic aobj1 (11,10);          //Error
    Arithematic aobj2 (101,50);         //Error

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Subtraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
  
    
   
    return 0;
}