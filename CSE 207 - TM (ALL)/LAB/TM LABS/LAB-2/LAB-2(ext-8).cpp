int indexOf(int item& i)
{
    Node* tempNOde = first;
    int count = 0;
    while(tempNOde != NULL)
    {
        if (i.compare(tempNode->i) == 0)
        {
            break;
        }
        ++count;
        tempNode = tempNode->next;
    }
    return count;
}
