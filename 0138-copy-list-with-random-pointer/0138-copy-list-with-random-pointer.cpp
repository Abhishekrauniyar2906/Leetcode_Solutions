class Solution {
public:

    void insertAtTail(Node*& head, Node*& tail, int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* copyRandomList(Node* head) {
        if (!head) {
            return NULL; // Handle empty list
        }

        // Step 1: Create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Create a mapping between original and cloned nodes
        unordered_map<Node*, Node*> mapping;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while (originalNode != NULL) {
            mapping[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 3: Set up random pointers in the clone list
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL) {
            if (originalNode->random) {
                cloneNode->random = mapping[originalNode->random];
            } else {
                cloneNode->random = NULL;
            }
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
