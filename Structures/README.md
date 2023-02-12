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
```
    Struct {
        int id;
        int salary;
        float salary;
    }
```

### Accessing members of a structure
We use the `.`(dot) operator to access name fields within structure variable <br/>
```
    John.name = "John"
```
The second method is using structure pointer operator `->`
```
    John.age -> 24;
```

### Initialized members of a structure
We can initialize members of structure by enclosing fields in a curly braces<br/>
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

### Modify Values in structure
We can modify value in structure using  `.` dot syntax. <br/>
`strcpy()` function is usefull in  modyfying string value.
```
    strcpy(John.name, "JOHN VIE")
    John.age = 34;
```

### typedef
This is used to redefine name already in existing variable <br/>
__syntax__
> typedef <existing name> <alias name>

```
    typedef Employee Employee_Details;

    Employee_Details John, Greiner;
```
This method can be very important when created a structure that initially had no name.
```
    typedef struct Employee_Salary
```
After that we can now access items inside the `Employee_Salary` structure

### Array Of Structures
This is collection of multiple structures variables where each variable contains
information about different entities <br/>
```
    struct Student{
        int regNumber;
        char Name[10];
        int year_of_registration;
        }

        struct Student std[3];
```
The structure above has the size
>  sizeof(std) = (int + char * 10 + int)  * 2 ==
(4 + 10 + 2) * 2 = 28


### Nested Structure
This is where we nest several structures within each other. It can be __previously__ defined structure or __newly__ defined one
1. Separate nesting
```
    Struct School{
        int po_Box;
        char name[30];

        struct Student John;
        Struct Employee Principal;
    }
```
We have created  a structure School that nests the structures `Student` and `Employee`. <br/>
To initialize items in the nested structure, we can use the method below using two (dot operator).
```
    School.John.regNumber = 30;
    School.Principal.salary = 10000;
```
2. Embeding nesting
```
    Struct School{
        int po_Box;
        char name[30];

        struct Student John;
        Struct Employee Principal;

        struct Student{
        int regNumber;
        char Name[10];
        int year_of_registration;
        }John;
        }School_1;
```
Accessing the items is the same with each one differently accesed by its name
```
    School.John.regNumber = 30;
    School_1.po_Box = 12441;
```

### Passing structure to a function
