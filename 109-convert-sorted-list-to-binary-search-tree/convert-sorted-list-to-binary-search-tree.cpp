class Solution {
public:
    int length(ListNode* &head){
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    TreeNode* solve(ListNode* &head, int n){
        if (n <= 0 || head == NULL) {
            return NULL;
        }

        // Left subtree
        TreeNode* leftSubtree = solve(head, n / 2);

        // Root node
        TreeNode* root = new TreeNode(head->val);

        // Move to the next node in the list
        head = head->next;

        // Right subtree
        TreeNode* rightSubtree = solve(head, n - n / 2 - 1);

        root->left = leftSubtree;
        root->right = rightSubtree;

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int n = length(head);
        return solve(head, n);
    }
};
