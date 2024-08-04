Node* deleteSingle(Node* head) {
    if (!head || !head->next || !head->next->next) {
        return head;
    }

    Node* prev = head;
    Node* cur = head->next;

    if (prev->value != cur->value && cur->value == cur->next->value) {
        head = cur;
        delete prev;
        return head;
    }

    while (cur->next != nullptr) {
        if (prev->value != cur->value && cur->value != cur->next->value) {
            prev->next = cur->next;
            delete cur;
            return head;
        }
        prev = cur;
        cur = cur->next;
    }

    if (prev->value != cur->value) {
        prev->next = nullptr;
        delete cur;
    }

    return head;
}