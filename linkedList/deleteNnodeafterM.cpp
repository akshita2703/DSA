#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

ListNode *getListAfterDeleteOperation(ListNode *head, int n, int m)
{
    ListNode *temp = head;
    ListNode *prev = NULL;
    int k = 0;
    int x = n;

    while (temp != NULL) {
        if (k == m) {
            while (x != 0 && temp != NULL) {
                ListNode *nextNode = temp->next;
                delete temp;
                temp = nextNode;
                x--;
            }
            prev->next = temp;
            k = 0;
            x = n;
        }

        if (temp != NULL) {
            prev = temp;
            temp = temp->next;
            k++;
        }
    }

    return head;
}

int main() {
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
    ListNode *head = new ListNode(1);
    ListNode *temp = head;

    for (int i = 2; i <= 10; i++) {
        temp->next = new ListNode(i);
        temp = temp->next;
    }

    // Call the function to delete 2 nodes after every 3 nodes
    int n = 2;
    int m = 3;
    ListNode *result = getListAfterDeleteOperation(head, n, m);

    // Print the resulting linked list
    temp = result;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
