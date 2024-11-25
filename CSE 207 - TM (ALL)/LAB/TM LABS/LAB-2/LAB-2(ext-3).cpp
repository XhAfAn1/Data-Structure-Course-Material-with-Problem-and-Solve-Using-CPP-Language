void addanypos( int pos, int item ){
           if( pos >= size() )
            {
                cout << "Position is greater than the size of list" << endl;
            }
           else if( pos == 0 )
           {
               addbegin(item);
           }
           else
           {
               Node *temp = head;
           newdata = new Node(item);
           for( int i = 0 ; i < pos-1 ; i++ )
           {
               temp = temp -> next;
           }
           newdata -> next = temp -> next;
           temp -> next = newdata;
           }
       }
