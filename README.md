# cpp-practicals
c++ Programming Practical Programs


## Practical 1: GitHub Setup and C++ Fundamentals

### Aim
To practise basic C++ syntax and learn how to track code changes using Git and GitHub.

### Concepts Used
- Variables and Data Types
- Constants
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Input and Output using cin and cout

### Source Code
Practical1.cpp

### Compilation
g++ Practical1.cpp -o Practical1

### Execution
On Windows:
.\Practical1.exe

### Description
This program accepts student name, roll number, marks and attendance as input. It calculates total marks and average, checks whether the student has passed and displays attendance eligibility.



## Practical 2: Classes, Access Specifiers and Member Functions

### Aim
To understand how classes combine data and behaviour, and how access specifiers protect data.

### Concepts Used
- Classes and Objects
- Private and Public Access Specifiers
- Constructors
- Member Functions
- Encapsulation

### Source Code
`Practical2.cpp`

### Description
This program demonstrates a Car class with private data members and public member functions. It creates two car objects, Toyota and Mahindra, and demonstrates their operations such as starting the engine, accelerating, decelerating and turning off the engine.

### Output
The program displays the details and operations of two car objects.


## Practical 3: Constructors and Rule of Five

### Aim
To understand object creation, copying, moving and safe management of dynamically allocated memory.

### Concepts Used
- Default Constructor
- Parameterized Constructor
- Copy Constructor
- Copy Assignment Operator
- Move Constructor
- Move Assignment Operator
- Destructor
- Rule of Five

### Source Code
`Practical3.cpp`

### Description
This program demonstrates the Rule of Five using a dynamically allocated integer array. It implements default, parameterized, copy and move constructors, copy and move assignment operators, and a destructor to manage memory safely.

### Output
The program displays constructor calls, array elements, move operations and destructor calls.


## Practical 4: RAII and Smart Pointers

### Aim
To understand RAII and automatic memory management using smart pointers.

### Concepts Used
- RAII
- std::unique_ptr
- std::shared_ptr
- make_unique()
- make_shared()
- Reference Counting
- Automatic Memory Management

### Source Code
`Practical4.cpp`

### Description
This program demonstrates unique_ptr and shared_ptr using a Student class. It compares exclusive and shared ownership and shows automatic object destruction when pointers go out of scope.

### Output
The program displays object creation, reference counts and automatic destruction of objects.

## Practical 5: University Management Using Inheritance

### Aim
To implement multilevel inheritance using Person, Student and GraduateStudent classes.

### Concepts Used
- Inheritance
- Multilevel Inheritance
- Base and Derived Classes
- Protected and Private Members
- Member Functions

### Source Code
`Practical5.cpp`

### Description
This program demonstrates a university management system using multilevel inheritance. Person is the base class, Student inherits Person, and GraduateStudent inherits Student. It displays personal, academic and research details.

### Output
The program displays graduate student details entered by the user.

## Practical 6: Abstract Shape Class

### Aim
To create an abstract Shape class and implement Circle, Rectangle and Triangle using the area() function.

### Concepts Used
- Abstract Classes
- Pure Virtual Functions
- Inheritance
- Function Overriding
- Runtime Polymorphism

### Source Code
`Practical6.cpp`

### Description
This program creates an abstract Shape class with a pure virtual area() function. Circle, Rectangle and Triangle inherit the Shape class and provide their own area calculations.

### Output
The program displays the calculated areas of Circle, Rectangle and Triangle.



