Node* insert(Node* head, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    Node* cur = head;
    if (!head) return new_node;
    if (!head->next)
    {
        if (head->value < value)
        {
            head->next = new_node;
            return head;
        }
        else
        {
            new_node->next = head;
            return new_node;
        }
    }

    bool check = (cur->value > cur->next->value);
    if (!check) {
        if (cur->value >= value) {
            new_node->next = cur;
            return new_node;
        }
    }
    else {
        if (cur->value <= value) {
            new_node->next = cur;
            return new_node;
        }
    }

    if (!check) {
        while (cur->next && !(cur->value <= value && value <= cur->next->value)) {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
    }
    else {
        while (cur->next && !(cur->value >= value && value >= cur->next->value)) {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
    }

    return head;

}
