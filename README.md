# Automated-Performance-Appraisal-System
Introduction
The Automated Performance Appraisal System is a software application
developed using object-oriented programming concepts in C++. It aims to
streamline and automate the process of evaluating and assessing employee
performance within an organization.
The system provides functionalities such as adding employees, displaying the
employee list, and enabling search operations. It also incorporates the role of
managers, who are responsible for assigning ratings to employees based on their
performance. The ratings provided by managers cannot be modified by other
employees, ensuring data integrity and accuracy.

Methodology:
The system utilizes key concepts of object-oriented programming, including
classes, inheritance, constructors, access specifiers, vectors, pointers, member
functions, range-based for loops, and function overriding. It employs two main
classes: the Employee class as the base class and the Manager class as the
derived class. The Employee class encapsulates employee details such as name,
ID, and rating. The Manager class extends the functionality of the Employee
class, introducing additional features specific to managers, such as the ability to
add employees, display employee details, and search for employees.
By employing these concepts, the Automated Performance Appraisal System
simplifies and automates the performance appraisal process, improving
efficiency and accuracy within an organization.
Features of Project

The above code contains the following features from c++ :
• Classes + objects along with few member functions and data members
• Inheritence / derived classes
• Vectors
• Loops
• Conditional checks
• Virtual functions

Classes and respective member variables and functions involved in this
code are :
1) Employee [base class] - has the ability to accept basic employee details
and display them as an object.
• name [protected / data member] - stores the name of the employee as a
string.
• id [protected / data member] - stores the ID of the employee as int.
• rating [protected / data member] - stores the rating provided by the
manager as double.
• Employee() [public/ constructor function] - the details of the employee
object is taken from the user and assigned through a initializer list.
• getID() [public/ member function] - returns the protected data member
- id , to prevent attempts of editing the data but only access to view it.
• displayDetails() [public / virtual member function] - displays all the
details of an object.
• ~Employee() [public / virtual destructor function] - deallocates the
memory of all objects belonging to this class. Since it is virtual it also
allows for the deallocation of any derived classes if they exist.

2) Manager [derived class] - class is derived from Employee Class and has
added features like : storing multiple employee objects, searching for an

employee and displaying their details. All the member functions of
Employee class are already inherited here this is achieved by setting the
access modifier as public.
• employess [private / data member] - vector that stores array of pointers
to objects of Employee class which is used to display, add and search for
a particular employee using their ID .We made the use of vector rather
than an array as we need a dynamic array to store details of a given
employee. We have deleted the vector at the end of program in order to
clear any memory allocated to it.
• Manager() [public / constructor function] - that takes name, id and
rating of the employee and stores it in an Employee class.
• addEmployee() [public/ member function] - public function which add
the object created of employee class into the vector employess.
• displayEmployees() [public/ member function] - check whether the
employess vector is empty and displays details of all employees using a
for range to call on displayDetails() from the base class in case of
the contrary.
• searchEmployee() [public / member function] - check whether the
employess vector is empty. If not, compares the Employee id using the
for range, accessing the Employee Id using the getID()
• Manager manager("shaun",4,5) [global object] - an initial user is
created of class Manager
• ~Manager() -[public / virtual destructor function] - deallocates the
memory of all objects belonging to this class.

3) main() [main function] - allows for user to interact and use all the
classes and function defined in the whole program.
• usertype [int variable] - stores the type of user : Employee or Manager
; which both have different permissions, the value of usertype is set 1 to
enter as Employee and is set to 2 to enter as Manager.
• choice [int variable] - stores the choice of action any particular user is
allowed used as a parameter in switch cases.
• do-while [loop] - asks the user for the next action to be performed until
the user wishes to exit
• switch case [conditional statement] - used to execute particular choice
of the user and call the according function, Each type of user type have
been given different options of action such as :

1) Manager
• Can add Employees
• Can display Employee Details
• Can Search for an Employee
• Can change to employee mode
• Exit
2) Employee
• Can display the rating given by the manager (cannot
make any changes regarding this)
• Can exit
