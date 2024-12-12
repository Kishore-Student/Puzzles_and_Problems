/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insert(struct ListNode* start,int i)
{ 
  struct ListNode* temp,*current;
  temp=(struct ListNode*)malloc(sizeof(struct ListNode));
  temp->val=i;
  temp->next=NULL;
  if(start==NULL)
     return temp;
  current=start;
  while(current->next!=NULL)
  current=current->next;
  current->next=temp;
  return start;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int m=0,n=0,a=0,b=0,c=0;
    long int i=0;
    struct ListNode* current, *result;
    current=l1;
    while(current!=NULL)
    {
        a+=(current->val*pow(10,n));
        current=current->next;
        ++n;
    }
    current=l2;
    while(current!=NULL)
    {
        b+=(current->val*pow(10,m));
        current=current->next;
        ++m;
    }
    result=NULL;
    i=a+b;
    current=result;
    while(i>0)
    { 
      c=i%10;
      i=i/10; 
      result=insert(result,c);      
    }
    if(result==NULL)
    result=insert(result,0);
    return result;
}