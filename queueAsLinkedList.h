/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Queue ADT implemented using linked list
 * Purpose: Queue ADT library - FIFO
 * ===========================================================
 */

#ifndef QUEUEASLIST_H
#define QUEUEASLIST_H
#include <stdbool.h>
#include <stddef.h>

#include "listAsLinkedList.h"

typedef LinkedList QueueAsLinkedList;

/** queueEnqueue()
 * @brief - puts an element onto the back of the queue
 * @param queue - a ptr to the queue structure
 * @param element - the value to add to the back of the queue
 * @pre   - queue before element added
 * @post  - queue one element longer
 */
void queueEnqueue(QueueAsLinkedList* queue, double element);

/** queueDequeue()
 * @brief - removes an element from the front of the queue
 * @param queue - a ptr to the queue structure
 * @pre   - queue before element removed from the front
 * @post  - queue one element shorter
 */
double queueDequeue(QueueAsLinkedList* queue);

/** queueIsEmpty()
 * @brief  - determines if the queue is empty
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is empty or false
 * @pre    - queue unmodified
 * @post   - queue unmodified; and empty status returned
 */
bool queueIsEmpty(QueueAsLinkedList* queue);

/** queueIsFull()
 * @brief - determines if the queue is full
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is full or false
 * @pre    - queue unmodified
 * @post   - queue unmodified; always returns false
 */
bool queueIsFull(QueueAsLinkedList* queue);

/** queueInit()
 * @brief  - initializes the queue structure
 * @return - pointer to queue
 * @pre    - nothing
 * @post   - new empty queue returned
 */
QueueAsLinkedList* queueInit();

/** deleteQueue()
 * @brief  - deletes queue, freeing all memory used
 * @param queue - a ptr to the queue structure
 * @pre    - unmodified queue
 * @post   - the queue is erased
 */
void deleteQueue(QueueAsLinkedList* queue);

/** queuePeek()
 * @brief  - returns the item in the front of the
 *           queue but doesn't remove it
 * @param queue - a ptr to the queue structure
 * @return - the item on the top of the queue
 * @pre    - queue unmodified
 * @post   - queue unmodified; top element returned
 */
double queuePeek(QueueAsLinkedList* queue);

/** queueSize()
 * @brief  - determines the size of the queue
 * @param queue - a ptr to the queue structure
 * @return - number of items in the queue
 * @pre    - queue unmodified
 * @post   - queue unmodified; size of queue returned
 */
int queueSize(QueueAsLinkedList* queue);

/** queuePrint()
 * @brief  - outputs the queue to the console
 * @param queue - the queue structure
 * @pre    - queue unmodified
 * @post   - queue unmodified; queue elements printed
 */
void queuePrint(QueueAsLinkedList* queue);

#endif  // QUEUEASLIST_H
