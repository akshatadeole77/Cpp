#include <iostream>
using namespace std;

struct node
{
    int Data;
    node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = new NODE;
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

bool IsPrime(int no)
{
    if(no < 2) return false;
    for(int i = 2; i <= no/2; i++)
    {
        if(no % i == 0)
            return false;
    }
    return true;
}

void DisplayPrime(PNODE Head)
{
    cout << "Prime numbers are: ";
    while(Head != NULL)
    {
        if(IsPrime(Head->Data))
            cout << Head->Data << " ";
        Head = Head->Next;
    }
    cout << endl;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

   
    DisplayPrime(First);

    return 0;
}
