SinglyLinkedListNode* insertTail(SinglyLinkedListNode* llist, int value)
{
    SinglyLinkedListNode* tail = new SinglyLinkedListNode(0);
    tail->data = value;
    if (!llist) return tail;
    SinglyLinkedListNode* tmp = llist;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = tail;

    return llist;
}
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode* head = new SinglyLinkedListNode(0);
    while (head1 && head2)
    {
        if (head1->data > head2->data)
        {
            insertTail(head, head2->data);
            head2 = head2->next;
        }
        else
        {
            insertTail(head, head1->data);
            head1 = head1->next;
        }

    }

    while (head1)
    {
        insertTail(head, head1->data);
        head1 = head1->next;
    }


    while (head2)
    {
        insertTail(head, head2->data);
        head2 = head2->next;
    }

    return head->next;
}