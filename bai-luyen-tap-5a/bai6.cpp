void printReverse(Node* head, int k)
{
    if (head == nullptr || k == 0) {
        return; // Điều kiện dừng đệ quy
    }

    printReverse(head->next, k - 1);

    std::cout << head->value;

    std::cout << " ";
}