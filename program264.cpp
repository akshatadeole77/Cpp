#include<iostream>
using namespace std;

int Maximum(int No1, int No2)
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
    int iValue1 = 10, iValue2 = 20, iRet = 0;
    

    iRet = Maximum(iValue1,iValue2);
    cout<<"Maximum :" << iRet << "\n";

    
   

    

    return 0;
}