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


## Practical 7: Function and Operator Overloading

### Aim
To demonstrate function overloading and operator overloading using a Complex Number class.

### Concepts Used
- Classes and Objects
- Function Overloading
- Operator Overloading
- Constructors
- Member Functions

### Source Code
`Practical7.cpp`

### Description
This program demonstrates function overloading using two display() functions and operator overloading using the + operator to add two complex numbers.

### Output
The program displays two complex numbers and their sum.

## Practical 8: Singleton Design Pattern

### Aim
To implement the Singleton design pattern in C++ and understand its use case and trade-offs.

### Concepts Used
- Design Patterns
- Singleton Pattern
- Static Data Members
- Static Member Functions
- Private Constructor

### Source Code
`Practical8.cpp`

### Description
This program implements a Singleton Database class. It ensures that only one instance of the Database class is created and reused whenever getInstance() is called.

### Use Case
The Singleton pattern can be used in database connections, logging systems and configuration managers.

### Trade-offs
It avoids multiple object creation but can make testing difficult and may introduce global state. This implementation is not thread-safe.

### Output
The program confirms that both pointers refer to the same Database instance.

## Practical 9: Generic Stack Using Templates

### Aim
To implement a generic Stack class using C++ templates and test it with int, float and string values.

### Concepts Used
- Class Templates
- Generic Programming
- Stack Data Structure
- Push and Pop Operations
- STL String

### Source Code
`Practical9.cpp`

### Description
This program implements a generic Stack class using templates. The same class is used to store and display integer, floating-point and string values.

### Output
The program demonstrates stack operations using int, float and string data types.

## Practical 10: Custom Exception Hierarchy

### Aim
To create a custom exception hierarchy and demonstrate throwing and catching specific exceptions in a banking transaction program.

### Concepts Used
- Exception Handling
- Custom Exceptions
- try and catch Blocks
- throw Keyword
- Inheritance
- Banking Transactions

### Source Code
`Practical10.cpp`

### Description
This program creates a custom exception hierarchy for a banking system. It handles insufficient balance and invalid withdrawal amount using separate exception classes.

### Output
The program displays specific error messages for invalid banking transactions.

## Practical 11: CSV Reader and Writer Using fstream

### Aim
To store and retrieve student records using CSV files and demonstrate seekg(), seekp(), tellg() and tellp().

### Concepts Used
- File Handling
- fstream
- CSV Files
- File Reading and Writing
- seekg() and seekp()
- tellg() and tellp()

### Source Code
`Practical11.cpp`

### Description
This program writes student records into a CSV file and reads them back. It also demonstrates file pointer positioning using seekg(), seekp(), tellg() and tellp().

### Output
The program displays student records and the current reading and writing positions in the file.

## Practical 12 – Inventory Management System

**Description:** A console-based Inventory Management System developed using C++.

**Features:**
- Add new products.
- Search products by ID.
- Display all products.
- Update product quantity.
- Sell products and manage stock.
- Save product records using CSV file handling.

**OOP Concepts Used:**
- Classes and Objects
- Encapsulation
- Inheritance
- Polymorphism

**Other Concepts:**
- STL Vector
- Exception Handling
- File Handling

**Files:**
- Practical12.cpp
- inventory.csv

