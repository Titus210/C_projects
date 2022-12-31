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

***
### Value of operator / indirection operator / dereference operator
This is operator used to access the value stored at location pointed by the pointer. <br>
i.e: We can change the value of `x` to `10` by dereferencing the address of `x`.
```
    // before changing the value
    printf("%d", x); // 5

    // after changing the value
    *ptr = 10;
    printf("%d", x); // 10
```
__NOTE__: <br>
Dereferencing a pointer can cause  __segmentation fault__ which is caused when a program is trying to __read__ or __write__ on an illegal memory location. <br>

__How can we avoid segmentation fault?__
1. Do not apply indirectional pointers to an uninitialized pointer.
```
    int ptr;
    printf("%d", *ptr);
```

1. Do not assign value to uninitialized pointer.
```
    int ptr;
    *ptr = 12;
```

*** 
### Pointer Assignment
This is where we assign a pointer to another pointer.
```
    int i = 12;
    int *p, *y;
    p = &i;     //10
    y = p;      //10
```
The pointer `p`stores the memory address of `i` 
__NOTE__: <br>
`p` == `q`  which is not `*p` == `y`. <br>
