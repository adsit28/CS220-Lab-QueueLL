/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Queue ADT implemented using linked list
 * Purpose: Queue ADT library - FIFO
 * 
 * Doc - coded entirely by chatgpt
 * ===========================================================
 */

#include "queueAsLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

// Function to enqueue an element (add to the back of the queue)
void queueEnqueue(QueueAsLinkedList* queue, double element) {
    // Create a node for the new element
    Node* newNode = createNode(7, element, '\0');  // assuming the element is a real number
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed for new node.\n");
        exit(EXIT_FAILURE);
    }

    // Append the new node to the queue (linked list)
    appendElementLinkedList(queue, newNode->data);
}

// Function to dequeue an element (remove from the front of the queue)
double queueDequeue(QueueAsLinkedList* queue) {
    if (queueIsEmpty(queue)) {
        fprintf(stderr, "Queue is empty, cannot dequeue.\n");
        exit(EXIT_FAILURE);  // Handle the case where dequeue is called on an empty queue
    }

    // Get the node at the front of the queue
    double frontElement = getElementLinkedList(queue, 1);
    // Remove the front node from the queue
    deleteElementLinkedList(queue, 0);

    return frontElement;
}

// Function to check if the queue is empty
bool queueIsEmpty(QueueAsLinkedList* queue) {
    return (lengthOfLinkedList(queue) == 0);  // If the queue has no elements, it's empty
}

// Function to check if the queue is full (always returns false for a linked list-based queue)
bool queueIsFull(QueueAsLinkedList* queue) {
    return false;  // A linked list-based queue is never full unless memory is exhausted
}

// Function to initialize the queue (returns a pointer to an empty queue)
QueueAsLinkedList* queueInit() {
    QueueAsLinkedList* newQueue = linkedListInit();  // Initialize an empty linked list
    return newQueue;
}

// Function to delete the queue and free all allocated memory
void deleteQueue(QueueAsLinkedList* queue) {
    deleteLinkedList(queue);  // Delete the linked list
}

// Function to peek at the front of the queue (doesn't remove the element)
double queuePeek(QueueAsLinkedList* queue) {
    if (queueIsEmpty(queue)) {
        fprintf(stderr, "Queue is empty, cannot peek.\n");
        exit(EXIT_FAILURE);
    }

    // Get the front element of the queue
    double frontNode = getElementLinkedList(queue, 0);
    return frontNode;
}

// Function to get the size of the queue
int queueSize(QueueAsLinkedList* queue) {
    return lengthOfLinkedList(queue);  // The size of the queue is the size of the linked list
}

// Function to print the queue elements
void queuePrint(QueueAsLinkedList* queue) {
    printLinkedList(queue);  // Use the printLinkedList function to print the queue
}
