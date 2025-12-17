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

bool IsPerfect(int no)
{
    int sum = 0;
    for(int i = 1; i <= no/2; i++)
    {
        if(no % i == 0)
            sum += i;
    }
    return (sum == no);
}

void DisplayPerfect(PNODE Head)
{
    cout << "Perfect numbers are: ";
    while(Head != NULL)
    {
        if(IsPerfect(Head->Data))
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

    DisplayPerfect(First);
  

    return 0;
}
