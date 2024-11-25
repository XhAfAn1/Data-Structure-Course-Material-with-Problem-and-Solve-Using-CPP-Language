void removelestEND()
{
    if(head == NULL)
    {
        cout << "There is no item to delete!" << endl;
        return;
    }
    Node* Start = head;
    if(Start->Next != NULL)
    {
        while ((Start->Next)->Next != NULL)
        {
            Start = Start->Next;

        }
        temp = Start->Next;
        Star->Next = NULL;

    }
    else
    {
        temp = Start;
        head = NULL;
    }
    cout << "Remove Lest END: " << temp->Data << eldl;
    delete temp;
}
