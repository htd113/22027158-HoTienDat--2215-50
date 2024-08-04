void print(Node* head)
{
    Node* dummy = head;
    while (dummy)
    {
        cout << dummy->value << " ";
        dummy = dummy->next;
    }
}