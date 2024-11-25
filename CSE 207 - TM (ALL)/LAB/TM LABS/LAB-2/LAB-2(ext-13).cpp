void sort()
{
    struct node *current = head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;

            while(index != NULL)
            {
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}
