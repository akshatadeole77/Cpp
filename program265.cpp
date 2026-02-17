#include<iostream>
using namespace std;

double Maximum(double No1, double No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

template<class T>

T Add(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    double dValue1 = 10.0, dValue2 = 20.0,dRet = 0.0;
    

    dRet = Maximum(dValue1,dValue2);
    cout<<"Maximum :" << dRet << "\n";

    
   

    

    return 0;
}