Node* deleteDuplicates(Node* head) {
    if (!head || !head->next) {
        return head;
    }

    Node* dummy = head;
    while (dummy && dummy->next) {
        Node* tmp1 = dummy;
        while (tmp1->next) {
            if (tmp1->next->value == dummy->value) {
                Node* tmp2 = tmp1->next;
                tmp1->next = tmp1->next->next;
                delete tmp2;
            }
            else {
                tmp1 = tmp1->next;
            }
        }
        dummy = dummy->next;
    }

    return head;
}