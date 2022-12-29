##  Pointers
***
A pointer is a variable that stores memory address of another variable <br>
i.e: <br>
```
    int *a  // declaring a pointer to an int type
    char *b // declaring a pointer to a char type
```
__syntax__
`data type *pointer name`
```
    int x = 10;
    int *ptr;
    ptr = &x;   
```
__explanation__: <br>
integer `x` has a value of `10` and stored in memory address `1000`, pointer `ptr` is a pointer to the memory address of `x` which holds the value `1000`. <br>
__NOTE__:
The pointer is allocated its separate memory and has a different memory address. i.e: <br> 
`int ptr;` can be allocated a memory address `2000` but stores the address of `x`  that is `1000`.