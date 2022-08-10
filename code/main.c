#include "list.h"

int main(){

    List l;

    List_Create(&l);

    List_InsertInHead(&l,1);
    List_InsertInHead(&l,2);
    List_InsertInHead(&l,3);
    List_InsertFinalList(&l,4);
    List_InsertFinalList(&l,5);
    List_InsertFinalList(&l,6);
    List_InsertFinalList(&l,7);
    List_InsertFinalList(&l,8);
    List_InsertFinalList(&l,9);
    
    List_PrintListV1(&l);

    List_RemoveNode(&l,3);
    List_RemoveNode(&l,6);
    List_RemoveNode(&l,9);

    List_PrintListV1(&l);

    return 0;
}