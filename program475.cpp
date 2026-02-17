#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside Constructor\n";
    iSize = no;
    Arr = new int[iSize];       //Resource allocation
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    int iCnt = 0;

    cout<<"Elements the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)

    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum =  iSum + Arr[iCnt];
    }
    cout<<"\n";
}




int main()
{
    int iValue = 0;

    cout<<"Enter the number of elements: \n";
    cin>>iValue;

    //Step 1: Allocate the memory
    ArrayX *aobj = new ArrayX(10);  

    //Step 2: Use the memory
    aobj -> Accept();
    aobj -> Display();

    cout<<"Summation of all elements:"<<aobj->Addition()<<"\n";
    //Step 3: Deallocate the memory
    delete aobj;

    return 0;
}