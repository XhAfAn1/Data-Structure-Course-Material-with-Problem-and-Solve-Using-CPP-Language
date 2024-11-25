bool IntLinkedList::isEmpty(LinkedListNode *node)
{
    bool status;

    node = head;

    if (node->next == NULL )

        status = true;
    else
        status = false;
    return status;
}
