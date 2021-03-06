 # **Accessing 2-D & n-D Arrays Elements** using 3 Methods mentioned below
 - ### 1) Using Normal 2D Array
 - ### 2) Using One Pointer and linking it to multiple Arrays (Combination of both Pointer and Array)
 - ### 3) Using only pointers

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


# **Row & Column Major Matrix**

## **Definition:** A matrix represented in a 1D Array
Row Major Matrix can be represented using the formula 
    
### **Row Major Matrix Formula**  

    addr ( A [ i ] [ j ] ) = L0 + [ i * n + j] * w

### **Column Major Matrix Formula**  

    addr ( A [ i ] [ j ] ) = L0 + [ j * m + i] * w

 <img src="row_major_matrix.png" width="600">






# **Formula for 3-D Array** 
## Using Row Major (left to right)

    addr( A [ i ] [ j ] [ k ] ) = L0 + [ i * m * n + j * n + k ] * w

## Using Column Major (right to left)
    addr( A [ i ] [ j ] [ k ] ) = L0 + [ k * l * m + j * l + i ] + w









# **Formula for n-D array using Row major**

 <img src="nd_formula.png" width="600">

using the above formula the time complexity is O(n^2)

## **More faster way** - Time Complextiy: O(n) - (using Horners Rule)

 <img src="n-d_formula_faster_method.png" width="600">
