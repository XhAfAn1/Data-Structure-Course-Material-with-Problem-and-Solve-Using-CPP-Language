void addbegin( Node** head_ref, int new_item)
{
    Node* new_node = new Node(item);

    new_node->item = new_item;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}
