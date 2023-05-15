# Malloc
It is called Memory Allocation/. <br/>
This function is stored in `stdlib.h` <br/>
It allocates memory according to the size specified in heap. <br/>
It returns pointer to first byte else `null` <br/>
***
## How It works
It allocates memory requested without knowing type, therefore must be typecasted
### syntax
```
	type *ptr = (type*)malloc(n * sizeof(type));
```
where `n` is the number of memory to allocate to a certain data `type`

