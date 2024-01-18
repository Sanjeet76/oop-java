#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x)  {
        val=x;
        next=NULL;
    }//This is the constructor of the ListNode struct. It is used to initialize the members of the ListNode object when a new node is created
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {//create function of merge two list where listnode return as a pointer
        // If list1 is NULL, return list2.
        if (l1 == NULL) {
            return l2;
        }
        
        // If list2 is NULL, return list1.
        if (l2 == NULL) {
            return l1;
        } 
        
        // If the value pointed to by l1 is less than or equal to the value
        // pointed to by l2, merge l1->next with the whole l2 list.
        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        // If the value pointed to by l2 is less than the value pointed to
        // by l1, merge l1 with l2->next.
        else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;            
        }
    }
};

// Function to create a linked list from user input.
ListNode* createLinkedList() {
    // Initialize pointers for the head and current nodes of the linked list.
    ListNode* head = NULL;
    ListNode* current = NULL;
    cout << "Enter the number of elements in the linked list: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> val;
        
        // Create a new ListNode and initialize it with the entered value.
        ListNode* newNode = new ListNode(val);
        
        if (head == NULL) {//  Check if the linked list is empty 
            // If it is  empty, set both head and current to the new node.
            head = newNode;
            current = newNode;
        } else {
            // If it's not empty, add the new node to the end of the list.
            current->next = newNode;
            // Update the current pointer to point to the new node.
            current = newNode;
        }
    }
    
    // Return the pointer to the head of the created linked list.
    return head;
}


// Function to print a linked list.
void printLinkedList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create two linked lists from user input.
    cout << "Create the first linked list:" << endl;
    ListNode* l1 = createLinkedList();
    
    cout << "Create the second linked list:" << endl;
    ListNode* l2 = createLinkedList();
    
    // Merge the two linked lists.
    Solution solution;//create instance of Solution class
    ListNode* mergedList = solution.mergeTwoLists(l1, l2);
    
    // Print the merged list.
    cout << "Merged List: ";
    printLinkedList(mergedList);//call printlinkedlist function
    
    // Clean up memory (free allocated nodes).
    while (mergedList != NULL) {// This loop will continue executing as long as the mergedList pointer is not NULL
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        free(temp);//free memomry of temp pointer
    }
    
    return 0;
}
