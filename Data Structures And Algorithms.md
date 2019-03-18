# Data Structures and Algorithms
Some introduction should be here!
# Arrays
>Arrays are kind of data structures that can store a fixed-size sequential collection of elements of the same type.[*](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)

##  Complexity of Array Operations
|                | TIME COMPLEXITY       |              
|----------------|:-------------------------------:|
|Operation|Best Case  &nbsp;&nbsp;&nbsp;\|  &nbsp;&nbsp;&nbsp;Worst Case
|Access         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `
|Search         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Insertion         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Deletion          |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `

# Linked Lists
Arrays are static which means they have fix size and can't be changed. To overcome this issue, we can make use of linked lists. Also when it come to operations like insertion and deletion, arrays are not a good fit at all. ( Θ(n) )


##  Complexity of Linked List Operations
|                | TIME COMPLEXITY       |              
|----------------|:-------------------------------:|
|Operation|Best Case  &nbsp;&nbsp;&nbsp;\|  &nbsp;&nbsp;&nbsp;Worst Case
|Access         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Search         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Insertion         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `
|Deletion          |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `

# Stacks
Stack is nothing but an abstract data structure which works with LIFO principle.

##  Complexity of Stack Operations
|                | TIME COMPLEXITY       |              
|----------------|:-------------------------------:|
|Operation|Best Case  &nbsp;&nbsp;&nbsp;\|  &nbsp;&nbsp;&nbsp;Worst Case
|Access         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Search         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Insertion         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `
|Deletion          |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `

# Queues
Queues are linear collection of objects. Queue operations like insertion and deletion use FIFO principle.


##  Complexity of Queue Operations
|                | TIME COMPLEXITY       |              
|----------------|:-------------------------------:|
|Operation|Best Case  &nbsp;&nbsp;&nbsp;\|  &nbsp;&nbsp;&nbsp;Worst Case
|Access         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Search         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Insertion         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `
|Deletion          |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `


# Binary Heaps
Binary Heaps are complete(balanced) binary trees. Binary Heaps are either Min Heaps or Max Heaps. 
: For Min Heaps, the value of each node must be greater than or equals to its parent, thus the root element will have the minimum value. 
: For Max Heaps, the value of each node must be less than or equals to its parent, thus the root element will have the maximum value.
 >"A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible." [*](http://web.cecs.pdx.edu/~sheard/course/Cs163/Doc/FullvsComplete.html)

##  Complexity of Binary Heap Operations
|                | TIME COMPLEXITY       |              
|----------------|:-------------------------------:|
|Operation|Avarage Case  &nbsp;&nbsp;&nbsp;\|  &nbsp;&nbsp;&nbsp;Worst Case
|Peek         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(1)  `
|Search         |` Θ(n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(n)  `
|Insert         |` Θ(1)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(log n)  `
|Delete         |` Θ(log n)  `&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;\|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;` Θ(log n)  `




















> Written with [StackEdit](https://stackedit.io/).
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTQ3ODE2ODg2Ml19
-->