# Types of Data Structures
* ## Physical Data Structures
* ## Logical Data Structures  

# 1) **Physical Data Structures:** 
### Physical data structures are actually meant for storing the data in the memory.
* ## Array
* ## Linked List

 ## **Array**
    This array will have fixed size, once it is created of some size, then that size cannot be increased or decreased. So, it is a fixed size. So, the size of an array is static.
    
    Where this array can be created? An array can be created either inside stack or it can be created inside heap.

    We can have a pointer, pointing to this array. So, array can be created either inside stack or inside heap, any where it can be created. 
    
    When to use this data structure?
    When you are sure, what is the maximum number of elements that you are going to store, if you know the length of the list then array can be used.

 ## **Linked List**
    This is a complete dynamic data structure, and it is a collection of nodes, where each node contains data and is linked to the next node.

    The length of this list can grow and reduce, dynamically. So, it is having variable length. So, as per your requirement, You can go on adding more and more nodes and add more elements, or You can reduce the size.
    
    This Linked List is always created in heap.
    
    Collection of nodes are created always in heap, like head may be a pointer, that is pointing there, So the head pointer may be inside the stack. So Linked List is always created in heap. We go with this one, if you know the limit of list, or the size of the list..

# 2) Logical Data Structure
### Physical data structures are actually meant for storing the data, they will hold the data, they will actually store the data in the memory. Then, when you have the list of values you may be performing operations like, inserting more values, or deleting existing values, or searching for the values, and many more operations.

### **Now the question is, How you want to utilize those values? How you will be performing insertion and deletion? What is the discipline that you are going to follow? That discipline is defined by these data structures given below:-**

* ## **Stack** - LIFO -> Linear DS
* ## **Queues** - FIFO -> Linear DS
* ## **Trees** -> Non-Linear DS
* ## **Graph** -> Non-Linear DS
* ## **Hash Table** -> Tabular