int getNthFromLast(Node *head, int n)
{
       //using two pointers, similar to finding middle element.
    Node *currNode = head , *nthNode = head;
    
    //traversing first n elements with first pointer.
    while(n!=0)
        {
            if(currNode==NULL)
                return -1;
            currNode = currNode->next;
            n--;
        }
    //now traversing with both pointers and when first pointer gives null 
    //we have got the nth node from end in second pointer since the first 
    //pointer had already traversed n nodes and thus had difference of n 
    //nodes with second pointer.
    while(currNode!=NULL)   
        {
            nthNode = nthNode->next;
            currNode = currNode->next;
        }
    
    //returning the data of nth node from end.
    if(nthNode!=NULL)
        return nthNode->data;
    else
        return -1;
    
}
