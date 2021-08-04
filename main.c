#include <stdio.h>
#include"print.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main(){


    sllinst* slist = s_makelist(NULL);
    s_inserte(slist,(int*)57,2);
    s_inserte(slist,(int*)89,3);
    s_inserte(slist,(int*)30,4);
    s_inserte(slist,(int*)1,5);
    s_printlist(slist, printint);


    return 0;
}