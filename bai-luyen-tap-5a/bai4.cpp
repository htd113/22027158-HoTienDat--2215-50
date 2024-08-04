Node* deleteNode(Node* head, int pos)
{
    Node* ptr, * ptr1, * ptr2;

    if (pos == 0)
    {
        ptr = head;
        ptr1 = ptr->next;
        head = ptr1;
    }
    else
    {
        ptr = head;
        int i = 1;
        while (i <= pos)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            ++i;
        }
        ptr2 = ptr->next;
        ptr1->next = ptr2;
        ptr->next = NULL;
    }
    return head;
}