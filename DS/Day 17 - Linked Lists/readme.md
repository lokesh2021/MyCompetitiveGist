# Linked List
## **Basics of Linked List**
### **Linked List** is a collection of nodes which contains data and link to next node
### Linked List is created in Heap 
<img src="basic_def.png" width="600">

## **Advantages/Disadvantages of Linked Lists**
<img src="pros_cons.png" width="600">

## **Applications of Linked List** 
<img src="applications.png" width="600">
</br>
</br>
</br>

## Creation of Node
```cpp
class Node{
    public:
        int data;           //data of the node
        Node *next;  //link to next node where the next node is also of type node 
}
```

## **Adding a node at the front**
### it is a 4 step process:
1) Allocate/create an empty node (new_node)
2) Put data into the new_node
3) Make the next of the new_node as the head
4) move the head to point to new_node

```cpp
//here Node is ** because it is a poniter which is pointing to the head pointer
    void push(Node** head_ref,int new_data)
    {
        Node new_node = new Node(); // step 1
        new_node->data = new_data;  // step 2
        new_node->next = *head_ref; // step 3 
        *head_ref = new_node;       // step 4
    }
```