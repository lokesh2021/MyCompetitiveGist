## Pointer to a Structure

```c
struct Rectangle
{
    int length;
    int breadth;
};
int main(){
    struct Rectangle *p = &r;

    p->length = 20; // -> is used to access pointer using structure

     //  *p.length = 20; this wont work as (.) operator has highest precedence
   
}
```