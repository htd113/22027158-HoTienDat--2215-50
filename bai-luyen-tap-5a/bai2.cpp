Node* insertTail(Node* head, int value)
{
    Node* tail = new Node();
    tail->value = value;
    if (!head) return tail;
    Node* tmp = head;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = tail;

    return head;
}