void bool contains(Node** head_ref, int new_item)
           {
               Node* new_node = (Node*) malloc(sizeof(Node));

               new_node->item = new_item;

               new_node->next = (*head_ref);

               (*head_ref) = new_node;
           }
           bool search(Node* head, int n)
           {
               if(head == NULL)
                return false;

               if (head->item == n)
                return true;
               return search(head->next, n);
           }

