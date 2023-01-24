## STRUCTURES
This is a user defined data type that stores  collection of different data types. <br/>
Each element of a structure is called a __member__
***
Structures are accesed by index rather than by name. 
### Properties
-   They consist of different data types
-   They have arbitrary values i.e have no indexing
-   Has fixed size based on combining size o internal components.

### Defining
We define structures using struct keyword
```
    struct Employee{
        char name[10];
        int age;
        double years_of_experience;
    } John, Doe, Mary, Jane;    // declaring variables
```
We can give additional variables of same type
```
    struct Employee Jay, Marcus, Alvarez;
```
We can create a structure without giving a name but additional variables can not be created
or passed to it. <br/>

### Accesing members of a structure
We use the `.`(dot) operator to access name fields within structure variable <br/>
```
    John.name = "John"
```
### Initialized members of a structure
We can initialize mwmbers of structure by enclosing fields in a curly braces<br/>
```
    struct Employee Doe ={"Doe", 21, 8.8}, Mary = {"Mary", 22, 8.1}
```
__C99__ Also allows the use of designated  initializers
```
     struct Employee Jay = {.age = 25, .name = "Jay", .years_of_experience =2.2};
     struct Employee Marcus = {.age = 23, .name = "MArcus", .years_of_experience =.2};
     struct Employee Alvarez = {.age = 25, .name = "Alvarez", .years_of_experience =4.2};
```

### Copy structures
We can assign a structure to another
```
    struct Employee Doe;
    Doe = John  // values of doe assigned to John
```
### Modify VAlues in structure
We can modify value in structure using  `.` dot syntax. <br/>
`strcpy()` function is usefull in  modyfying string value.
```
    strcpy(John.name, "JOHN VIE")
    John.age = 34;
```

