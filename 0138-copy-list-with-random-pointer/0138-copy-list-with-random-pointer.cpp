class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        Node* temp = head;
        while (temp != NULL) {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        temp = head;
        while (temp != NULL) {
            if (temp->random != NULL) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }

        Node* originalNode = head;
        Node* cloneNode = head->next;
        Node* cloneHead = cloneNode;

        while (originalNode != NULL && cloneNode != NULL) {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if (originalNode != NULL) {
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
