int GetNth(struct node* head, int index){
  // Code here
  node* p = head;
  int count=1;
  
  while(p != NULL){
      if(count == index)
          return p->data;
        count++;
        p = p->next;
  }
}
