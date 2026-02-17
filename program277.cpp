//OOP Approach

#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo1;
        int iNo2;

    Arithematic(int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    int Subtraction()
    {
        int Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
};

int main()
{
    Arithematic aobj (11,10);

    cout<<aobj.Addition()<<"\n";

    cout<<aobj.Subtraction()<<"\n";
  
    
   
    return 0;
}