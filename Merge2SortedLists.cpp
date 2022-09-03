#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(){
        val=0;
        next=NULL;
     }
     ListNode(int x){
        val=x;
        next=NULL;
     }
     ListNode(int x, ListNode* next){
        val=x;
        next=next;
     }
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* header=new ListNode(-50);
        ListNode* keeper=header;
        while(list1 && list2){
            if(list1->val<=list2->val){
                header->next=list1;
                list1=list1->next;
            }
            else{
                header->next=list2;
                list2=list2->next;
            }
            header=header->next;
        }
        while(list1){
            header->next=list1;
            list1=list1->next;
            header=header->next;
        }
        while(list2){
            header->next=list2;
            list2=list2->next;
            header=header->next;
        }



    return keeper->next;
}


int main(){

    ListNode* header1=new ListNode(0);
    //ListNode* n1=new ListNode(1);
    //ListNode* n2=new ListNode(2);
    //ListNode* n3=new ListNode(3);
    //header1->next=n1;n1->next=n2;n2->next=n3;n3->next=NULL;

    ListNode* header2=new ListNode(4);
    ListNode* p1=new ListNode(5);
    ListNode* p2=new ListNode(6);
    ListNode* p3=new ListNode(7);
    header2->next=p1;p1->next=p2;p2->next=p3;p3->next=NULL;

    ListNode* newHeader=mergeTwoLists(header1,NULL);

    while(newHeader!=NULL){
        cout<<newHeader->val<<" ";
        newHeader=newHeader->next;
    }

    return 0;
}