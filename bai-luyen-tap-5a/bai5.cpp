void printLast(Node* head, int k)
{
    Node* dummy = head;
    int count = 1;
    while (dummy)
    {
        dummy = dummy->next;
        count++;
    }

    Node* tmp = head;
    int count1 = count - k;
    while (count1 > 1)
    {
        tmp = tmp->next;
        count1--;
    }
    while (tmp)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}