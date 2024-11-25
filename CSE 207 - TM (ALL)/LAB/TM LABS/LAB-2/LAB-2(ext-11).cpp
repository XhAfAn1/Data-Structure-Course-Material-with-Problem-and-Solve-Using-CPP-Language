void remove(Node** head_ref, int pos)
{
if (*head_ref == NULL)
    return;
Node* temp == *head_ref;

if (position == 0)
{
    *head_ref = temp->next;

    free(temp);
    return;
}
 for (int i=0; temp !=NULL && i< pos - 1; i++)
    temp = temp->next;

  if (temp == NULL || temp->next == NULL)
    return;
 Node* next = temp->next->next;

 free(temp->next);

 temp->next = next;
}
