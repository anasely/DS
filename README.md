# Array
## Inserting an Element in an Array
##### Inserting an element in an array refers to the operation of adding an element to the array. In the case of insertion, we assume that there is enough memory space still available in the array. For example, if we have an array that can hold 20 elements and the array contains only 15 elements, then we have space to accommodate five more elements. However, if the array can hold 15 elements, then we will not be able to insert other elements into the array. Insertion in arrays can be done in three ways: 
- Insertion at the beginnig.
    - In this case, the new element to be inserted is inserted at the beginning of the array. To insert an element at the beginning, all the elements stored in the array must move one place forward to vacate the first position in the array. For example, if an array is declared to hold 10 elements and it contains only seven elements, and also if it is given that the new element is to be inserted at the beginning of the array, then all the stored ele- ments must move one place ahead which is shown as follows:

    <img src="/Users/anas/Desktop/DS/img1.png" alt="Insert"/>

- Insertion at a specified position.
    - In this case, a new node is inserted after a given node in a linked list. As in the other cases, we will again check the overflow condition. If the mem- ory for the new node is available, it will be allocated; otherwise, an overflow message is printed. Then a PTR variable is made which will initially point to START, and the PTR variable is used to traverse the linked list until it reaches the value/node after which the new node is to be inserted. When it reaches that node/value, then the NEXT part of that node will store the address of the new node and the NEXT part of the NEW NODE will store the address of its next node in the linked list

    <img src="/Users/anas/Desktop/DS/link_pos.png">
- Insertion at the end.
    - To insert the new node at the end of the linked list, we will first check the overflow condition, which is whether the memory is available for a new node. If the memory is not available, then an overflow message is displayed; otherwise, the memory is allocated for the new node. Then a PTR variable is made which will initially point to START and will be used to traverse the linked list until it reaches the last node. When it reaches the last node, the NEXT part of the last node will store the address of the new node, and the NEXT part of the NEW NODE will contain NULL, which will denote the end of the linked list

    <img src="/Users/anas/Desktop/DS/link_end.png">


# Linked List
## Definition :
##### A linked list is a linear collection of data elements. These data ele- ments are called nodes, and they point to the next node by means of pointers. A linked list is a data structure which can be used to implement other data structures such as stacks, queues, trees, and so on. A linked list is a sequence of nodes in which each node contains one or more than one data field and a pointer which points to the next node. Also, linked lists are dynamic in nature; that is, memory is allocated as and when required. There is no need to know the exact size or exact number of elements as in the case of arrays. The following is an example of a simple linked list which contains five nodes:
     |5| | ---> |10| | ---> |15| | ---> |20| | ---> |25|null|
       |                                               |
     start                                            end

## Singly Linked List


## Circular Linked List

## Doubly Linked List

## Header Linked List

## Applications of linked list 
##### Consider a polynomial 10x2 + 6x + 9. In this polynomial, every indi- vidual term consists of two parts: first, a coefficient, and second, a power. Here, the coefficients of the expression are 10, 6, and 9, and 2, 1, and 0 are the respective powers of the coefficients. Now, every individual term can be represented using a node of the linked list. The following figure shows how a polynomial expression can be represented using a linked list

    - |10|2| | ----->  |6|1| | ----> |9|0|x|  ( 10 is Exponent and 2 is Power)




# Queue
##### A queue is a linear collection of data elements in which the element inserted first will be the element taken out first (i.e., a queue is a FIFO data structure). A queue is an abstract data structure, somewhat similar to stacks. Unlike stacks, a queue is open on both ends. A queue is a linear data structure in which the first element is inserted on one end called the REAR end (also called the tail end), and the deletion of the element takes place from the other end called the FRONT end (also called the head). One end is always used to insert data and the other end is used to remove data
## Implementation od a Queue
- Implementation of Queues using arrays
    Queues can be easily implemented using arrays. Initially the front end (head) and the rear end (tail) of the queue point at the first position or loca- tion of the array. As we insert new elements into the queue, the rear keeps on incrementing, always pointing to the position where the next element will be inserted, while the front remains at the first position