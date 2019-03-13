#ifndef LIST_H
#define LIST_H



#include <QString>
#include "error.h"


template <class MClas>
class List
{
private :
    struct Elem{
        Elem *next;
        Elem *pred;

        MClas a;
    };
public:
    List(){  }
    void push_back(MClas p){
        Elem *add = new Elem ;
        add->a = p;
        add->pred=last;
        add->next=NULL;
        if (last==NULL)
        {
            first = add;
        }
        else
            last->next=add;
        last=add;
    }

    MClas operator [](int n)
    {
        Elem *tec = first;
        for(int i=0;i<n;i++)
        {
           if(tec->next!=0)
               tec = tec->next;
           else
              throw new ErrorNoThisElement;
        }
        return tec->a;
    }
    int size()
    {
        int i=0;
        Elem *q=first;
        while(q!=NULL)
        {
            q=q->next;
            i++;
        }
        return i;
    }
    void removeAt(int n)
    {
        if(first==NULL)
            throw new ErrorNoThisElement;
        Elem *q = first;
        for(int i=0;i<n;i++)
        {
            q=q->next;
            if(q==NULL)
                throw new ErrorNoThisElement;
        }
        Elem *q1=q->pred;
        if(q->pred!=NULL)
            q->pred->next = q->next;
        if(q->next!=NULL)
            q->next->pred = q->pred;
        if(q==last)
            last=q->pred;
        if(q==first)
            first=q->next;
        delete q;
    }
    void clear(){
        while (first!=NULL)
        {
            last=first;
            first = first->next;
            delete last;
        }
        last =NULL;
        first =NULL;
    }
    ~List(){

    }
private:


    Elem *first= NULL;
    Elem *last= NULL ;
};
#endif // LIST_H
