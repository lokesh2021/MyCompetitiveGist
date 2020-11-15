# Arrays:
## Array is Collection of Elements of the same DataTypes

## **Array Declaration:**

    int A[5];

## **Array Initialization:**

    int A[5]={0,1,2,3,4};

## we can use pointer to **access memory in heap** using the following statement 

    int *p;
    p= new int[5];

## **Using the below command we can delete or free the memory once it is used to prevent Memory Leaks**

    delete []p  //where is the memory used by pointer