 # **Accessing 2-D Arrays Elements** using 3 Methods mentioned below
 - ## 1) Using Normal 2D Array
 - ## 2) Using One Pointer and linking it to multiple Arrays (Combination of both Pointer and Array)
 - ## 3) Using only pointers

 <img src="accessing_2d_array.png" width="600">

 # How address of element in Array is Obtained by the compiler?
 ## It can be obtained by the following formula

                    A[i]=L0+i*w

    where, L0 = Starting address of the Array
           i = Element Index in Array
           w = DataType word size of that Array

    example: A[4]=200+4*2 = 208 which is the Address of A[4]


```diff
- Key Point: Start with index i=0 every time to save execution time for larger arrays
```
