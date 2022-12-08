#include <stdio.h>
#include "stddef.h"
struct Node{
    unsigned long num;
    struct Node *next;
};
//this is a global variable
extern unsigned long stack_bottom_address;
struct Node *insert(struct Node *head, unsigned long number);{
struct Node *previous=head,*current=head;
//use the top of the heap and grow downward, should be safe
stack_bottom_address-=(sizeof(struct Node)+sizeof (unsigned long)-1)/sizeof (unsigned long)*sizeof (unsigned long);
((struct Node*)stack_bottom_address)->num=number;
if(head==NULL){
head=stack_bottom_address;
head->next=NULL;
return head;
}
while (current!=NULL&&number<current->num){
previous=current;
current=current->next;
}
previous->next= (struct Node *) stack_bottom_address;
previous->next->next=current;
return head;
}
int main() {

    return 0;
}
