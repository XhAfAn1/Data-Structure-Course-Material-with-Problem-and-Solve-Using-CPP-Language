template <class T>
int getPosition(Node<T>* head, T element)
{
    int pos = 0;
    if (head == nullptr)
    {
        return -1;
    }
    if (head->data == element)
    {
        return pos;
    }
    return getPosition(head->next, element);
}
