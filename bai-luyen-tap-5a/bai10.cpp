Node* sort(Node* head) {
    if (!head || !head->next) {
        // Danh sách rỗng hoặc chỉ có một phần tử, không cần sắp xếp
        return head;
    }

    Node* sorted = nullptr; // Danh sách đã sắp xếp
    Node* current = head; // Con trỏ duyệt danh sách ban đầu

    while (current) {
        Node* nextNode = current->next; // Lưu lại con trỏ đến phần tử kế tiếp
        if (!sorted || current->getValue() < sorted->getValue()) {
            // Nếu danh sách đã sắp xếp rỗng hoặc giá trị hiện tại nhỏ hơn giá trị đầu danh sách đã sắp xếp
            current->next = sorted;
            current->prev = nullptr;
            if (sorted) {
                sorted->prev = current;
            }
            sorted = current;
        }
        else {
            // Tìm vị trí thích hợp để chèn vào danh sách đã sắp xếp
            Node* temp = sorted;
            while (temp->next && temp->next->getValue() < current->getValue()) {
                temp = temp->next;
            }
            current->next = temp->next;
            current->prev = temp;
            if (temp->next) {
                temp->next->prev = current;
            }
            temp->next = current;
        }
        current = nextNode; // Di chuyển đến phần tử kế tiếp trong danh sách ban đầu
    }

    // Trả về con trỏ đến đầu danh sách đã sắp xếp
    return sorted;
}