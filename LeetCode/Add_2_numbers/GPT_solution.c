struct ListNode {
    int val;
    struct ListNode* next;
};

// Insert a new node at the end of the list
struct ListNode* insert(struct ListNode* start, int i) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = start;
    temp->val = i;
    temp->next = NULL;

    if (start == NULL) {
        return temp; // First node
    }

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = temp;
    return start;
}

// Add two numbers represented by linked lists
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = NULL;
    struct ListNode* current = NULL;
    int carry = 0;
    
    // Traverse both lists
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry; // Start with the carry value from the previous step

        // Add the values of the current nodes, if available
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        // Calculate new carry and the current digit to store in the result
        carry = sum / 10; // Carry for the next iteration
        int digit = sum % 10; // Current digit for the result list

        // Insert the digit into the result list
        if (result == NULL) {
            result = insert(result, digit);
            current = result; // Initialize current to the result's first node
        } else {
            current->next = insert(current->next, digit);
            current = current->next;
        }
    }

    return result;
}

