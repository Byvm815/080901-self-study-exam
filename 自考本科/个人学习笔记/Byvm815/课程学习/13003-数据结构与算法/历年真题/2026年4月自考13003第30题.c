// pythontutor.com
#include <stdio.h>
#include <stdlib.h>
typedef struct LinkNode{int data;struct LinkNode*next;}LinkNode;
static void fun(LinkNode**pL){
    LinkNode*prep=*pL,*p,*q;
    while(1){
        p=prep->next;
        if(p==NULL)break;
        q=p->next;
        if(q==NULL)break;
        p->next=q->next;
        q->next=p;
        prep->next=q;
        prep=p;
    }
}
int main(void){
    //int
    int a[9]={1,2,3,4,5,6,7,8,9},i;
    LinkNode*L,*r,*s,*p;
    L=(LinkNode*)malloc(sizeof(LinkNode));
    L->data=-1;L->next=NULL;r=L;
    for(i=0;i<9;i++){
        s=(LinkNode*)malloc(sizeof(LinkNode));
        s->data=a[i];s->next=NULL;r->next=s;r=s;
    }
    
    //core
    fun(&L);
    
    for(p=L->next;p;p=p->next)printf("%d ",p->data);
    printf("\n");
    return 0;
}
