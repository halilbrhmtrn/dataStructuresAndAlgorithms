/**
* @file LinkedList.h
* @brief This header file includes basic implementation of singly linkedlist functions.
*
* @author Halil Ibrahim Turan
*/
/** @def LINKED_LIST_H
 * @brief define macro to avoid multiple invocation of the header file*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/** @typedef dataType */
typedef int dataType;

/**
* @typedef node_t
* @brief This is a struct to represent linkedlist nodes.
*/
typedef struct node_s {
    dataType data;
    struct node_s *next;
} node_t;

/**
* @fn displayList(node_t* head)
* @brief This is a function to traverse the list and print nodes.
* @param head is pointer to the root of list.
* 
*/
void displayList(node_t* head);
/**
* @fn getSize(node_t* head)
* @brief This is a function to get size of a linkedlist.
* @param head is pointer to the root of list.
* @return int returns the size of the list.
*/
int getSize(node_t* head);
/**
* @fn findNode(node_t* head, dataType item)
* @brief This is a function to find node with specified item in the linkedlist.
* @param head is pointer to the root of list.
* @param item is data to find in nodes.
* @return node_t* returns the node with specified item.
*/
node_t* findNode(node_t* head, dataType item);
/**
* @fn allocateNode
* @brief This is a function to allocate memory for a node.
* @return node_t* returns the address of the node.
*/
node_t* allocateNode();
/**
* @fn removeAll(node_t* head)
* @brief This is a function to remove all node in the linkedlist(Destroy).
* @param head is pointer to the root of list.
* @return void.
*/
void removeAll(node_t* head);
/**
* @fn insertAfter(node_t* prevNode, dataType item)
* @brief This is a function to insert a node right after the specified node.
* @param prevNode is previous node. The new node will be inserted after this node.
* @param item is data of the new node.
* @return void.
*/
void insertAfter(node_t* prevNode, dataType item);
/**
* @fn insertBeginning(node_t* head, dataType item)
* @brief This is a function to insert a node beginning of the list.
* @param head is pointer to the root of list.
* @param item is data of the new node.
* @return node_t* returns the new head(root) node of the list.
*/
node_t* insertBeginning(node_t* head, dataType item);
/**
* @fn appendNode(node_t* head, dataType item)
* @brief This is a function to insert a node at the end of the list.
* @param head is pointer to the root of list.
* @param item is data of the new node.
* @return void.
*/
void appendNode(node_t* head, dataType item);
/**
* @fn removeAfter(node_t* prevNode, dataType item)
* @brief This is a function to remove a node right after the specified node.
* @param prevNode is previous node. The node after this one will be removed.
* @return void.
*/
void removeAfter(node_t* prevNode, dataType item);
/**
* @fn removeBeginning(node_t* head, dataType* item)
* @brief This is a function to remove root node of the list.
* @param head is pointer to the root of list.
* @param *item is to store data of removed head node.
* @return node_t* returns the new head(root) node of the list.
*/
node_t* removeBeginning(node_t* head, dataType* item);
/**
* @fn removeEnd(node_t* head, dataType* item)
* @brief This is a function to remove node at the end of the list.
* @param head is pointer to the root of list.
* @param *item is to store data of removed node.
* @return void.
*/
void removeEnd(node_t* head, dataType* item);
/**
* @fn removeNodeAt(node_t *head, int index, dataType *item)
* @brief This is a function to remove root node at specified Index.
* @param head is pointer to the root of list.
* @param index is the index of node that will be removed.
* @param *item is to store data of removed head node.
* @return node_t* returns the head(root) node of the list..
*/
node_t* removeNodeAt(node_t *head, int index, dataType *item);
/**
* @fn containsNode(node_t* head, dataType item)
* @brief This is a function that checks if a node with specifed data exist in the list or not.
* @param head is pointer to the head of the list.
* @param item is the specified data.
* @return int returns 1 if its found otherwise 0.
*/
int containsNode(node_t* head, dataType item);
/**
* @fn getNodeAt(node_t* head, int index)
* @brief This is a function to retrieve a node at specified Index.
* @param head is pointer to the head of list.
* @param index is the index of node that will be retrieved.
* @return node_t* returns the node at given index .
*/
node_t* getNodeAt(node_t* head, int index);




void displayList(node_t* head) {
    node_t *p;
    if(head == NULL) {
        printf("The LinkedList is empty!");
    }
    else {
        p = head;
        while(NULL != p) {
            printf(" %d ", p->data);
            if(NULL != p->next){
                printf(" => ");
            }
            p = p->next;
        }
    }
}
int getSize(node_t* head) {
    node_t* p;
    int size = 0;
    p = head;
    while(NULL != p){
        size++;
        p = p->next;
    }
    return size;
}
node_t* findNode(node_t* head, dataType item) {
    node_t* find = head;
    while(find != NULL && find->data != item) {
        find = find->next;
    }
    return find;
}
int containsNode(node_t* head, dataType item) {
    node_t* find = head;
    while(find != NULL) {
        if(find->data == item)
        {
            return 1;
        }
        find = find->next;
    }
    return 0;
}
node_t* allocateNode() {
    node_t *node;
    node = (node_t*)malloc(sizeof(node_t));
    node->next = NULL;
    return node;
}
void removeAll(node_t* head) {
    node_t* p;
    while(NULL != head) {
        p = head;
        head = head->next;
        free(p);
    }
}
void insertAfter(node_t* prevNode, dataType item) {
    node_t* newNode;
    newNode = allocateNode();
    newNode->data = item;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

node_t* insertBeginning(node_t* head, dataType item) {
    node_t* newNode;
    newNode = allocateNode();
    newNode->data = item;
    newNode->next = head;
    return newNode;
}

void appendNode(node_t* head, dataType item) {
    node_t* lastNode;
    if(head == NULL) {
        head = insertBeginning(head,item);
        return;
    }
    else {
        lastNode = head;
        while(lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        insertAfter(lastNode, item);
    }
}

void removeAfter(node_t* prevNode, dataType* item) {
    node_t* removedNode;
    removedNode = prevNode->next;
    *item = removedNode->data;
    prevNode->next = removedNode->next;
    free(removedNode);
}

node_t* removeBeginning(node_t* head, dataType* item) {
    node_t* removedNode;
    removedNode = head;
    *item = removedNode->data;
    head = removedNode->next;
    free(removedNode);
    return head;
}
void removeEnd(node_t* head, dataType* item) {
    node_t* prev;
    if(head != NULL) {
        if(NULL == head->next){
            head = removeBeginning(head,item)
        }
        else {
            prev = head;
            while(prev->next->next != NULL) {
                prev = prev->next;
            }
            removeAfter(prev,item);
        }
    }
    else {
        printf("Deletion cannot be done on an empty list!");
        *item = -91238074920;
        return;
    }
}

node_t* removeNodeAt(node_t* head, int index, dataType *item) {
    node_t* prev;
    int j;
    if(NULL != head) {
        int size = getSize(head);
        if(size < index) {
            printf("Index Out Of Bound. Cannot find node at %d in size of %d List.",index,size);
            *item = -98738759;
        }
        if(1 == index){
            head = removeBeginning(head, item);
        }
        else {
            prev = head;
            j = 1;
            while(j < index-1) {
                prev = prev->next;
                j++;
            }
            removeAfter(prev,item);
        }
    }
    else {
        *item = -998378;
        printf("Deletion cannot be done on an empty list!");
    }
    return head;
}
node_t* getNodeAt(node_t* head, int index) {
   if(NULL != head) {
        int size = getSize(head);
        if(size < index) {
            printf("Index Out Of Bound. Cannot find node at %d in size of %d List.",index,size);
            return NULL;
        }
        node_t* find = head;
        int j = 0;
        while(find != NULL) {
            if(index == j) {
                return find;
            }
            j++;
            find = find->next;
        }
        return find;
   }
   else {
        printf("The LinkedList is empty!");
        return NULL;
   }
}






#endif