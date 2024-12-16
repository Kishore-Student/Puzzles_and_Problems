/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* insert(struct ListNode* start,int val)
 { 
   struct ListNode* temp, *current;
   temp=(struct ListNode*)malloc(sizeof(struct ListNode));
   temp->val=val;
   temp->next=NULL; 
   if(start==NULL)
        return temp;
   current=start;
   while(current->next!=NULL)
        current=current->next;
    current->next=temp;
    return start;
 }
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
   struct ListNode* result=NULL,*current1,*current2;
   if(list1==NULL)
    return list2;
   if(list2==NULL)
    return list1;
   current1=list1;
   current2=list2;

   while(current1&&current2)
   {
    if(current1->val<=current2->val)
    {
        result=insert(result,current1->val);
        current1=current1->next;
    }    
    else
       {
        result=insert(result,current2->val);
        current2=current2->next;
       } 
   } 
 
   while(current2)
     {
        result=insert(result,current2->val);
        current2=current2->next;
     }
   while(current1)
   {
     result=insert(result,current1->val);
     current1=current1->next;
   }
   return result;
}