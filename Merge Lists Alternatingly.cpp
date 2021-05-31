void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     struct Node *p_curr=*p, *q_curr=*q;
     struct Node *p_next, *q_next;
     while(p_curr != NULL && q_curr != NULL){
     p_next = p_curr->next;
     q_next = q_curr->next;
     
     q_curr->next = p_next;
     p_curr->next = q_curr;
     
     p_curr=p_next;
     q_curr = q_next;
     }
     *q=q_curr;
}
