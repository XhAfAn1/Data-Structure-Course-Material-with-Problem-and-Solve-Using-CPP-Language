void add( Node** head_ref, int new_item)
{
    Node* new_node = new Node(item);
    Node *last = *head_ref;

    new_node->data = new_item;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last-> next;
    }
    last->next = new_node;

}
