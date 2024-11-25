int size()
       {
            Node *temp= head;
            int count = 0;
                if(temp!= NULL)

          {
                temp = temp->next;
                count++ ;
          }
          return count;
       }
