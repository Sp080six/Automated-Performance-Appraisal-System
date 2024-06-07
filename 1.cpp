#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
protected:
string name;
int id;
double rating;
public:
Employee(const string &name, int id, double rating)
: name(name), id(id), rating(rating) {}
int getID() const { return id; }
virtual void displayDetails() const {
cout << "Name: " << name << "\n"
<< "ID: " << id << "\n"
<< "Rating: " << rating << "\n";
}
virtual ~Employee()
{
cout<<"c++ projected executed!!"<<endl;
}
};
class Manager : public Employee {
private:
vector<Employee *>
employess;
public:
Manager(const string &name, int id, double rating)
: Employee(name, id, rating) {}
void addEmployee(Employee *emp) {
employess.push_back(emp);
cout << "Succesfully added employee!\n";
}

void displayEmployees() const {
if (employess.empty()) // checking whether the
vector is empty or not
{
cout << "No employess to show"
<< "\n";
return;
} else {
cout << "=====================" << endl;
for (const auto &emp : employess) {
emp->displayDetails();
cout << "------"
<< "\n";
}
}
}
virtual ~Manager()
{
for(const auto &emp:employess)
{
delete emp;
cout<<"Manager object deleted"<<endl;
}
}
void searchEmployee(int empID) const {
if (employess.empty()) {
cout << "No employess "
<< "\n";
return;
} else {
bool check = false;
for (const auto &emp : employess) {
if (emp->getID() == empID) {
cout << "=====================" << endl;
cout << "Employee found!"
<< "\n";
emp->displayDetails();
check = true;
break;
}
}

if (!check) {
cout << "Employee not found\n";
}
}
}
};
Manager manager("shaun",0,5);
void addEmployee(){
string name;
int id;
double rating;
cout << "Enter employee name: ";
cin.ignore();
getline(cin, name);
cout << "Enter employee ID: ";
cin >> id;
cout << "Enter employee rating: ";
cin >> rating;
Employee *emp = new Employee(name, id, rating);
manager.addEmployee(emp);
}
void searchEmployee() {
int empId;
cout << "Enter employee ID to search: ";
cin >> empId;
manager.searchEmployee(empId);
}
int main() {
int usertype;
cout << "Enter user type 1->Employee 2->Manager\n";
cin >> usertype;
if(usertype==2)
{
int choice;
do {
cout << "=====================" << endl;
cout << "Employee Performance Review" << endl;
cout << "=====================" << endl;
cout << "1. Add Employee" << endl;
cout << "2. Display Employees" << endl;

cout << "3. Search Employee" << endl;
cout << "4. Exit" << endl;
cout<<"5.Change mode"<<endl;
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
addEmployee();
break;
case 2:
manager.displayEmployees();
break;
case 3:
searchEmployee();
break;
case 4:
cout << "Exiting program..." << endl;
break;
case 5:
cout<<"Changed mode"<<endl;
usertype=1;
break;
default:
cout << "Invalid choice. Please try again."
<< endl;
break;
}
cout << endl;
}while(choice!=4 && usertype==2);
}
if(usertype==1)
{
int choice;
do {
cout << "------"
<< "\n";
cout << "Employee Performance Review!"
<< "\n";
cout << "Choose: "
<< "\n";
cout << "1.Display Employee Details: " << endl;

cout << "2.Exit" << endl;
cout << "Enter your choice: ";
cin>>choice;
switch (choice) {
case 1:
searchEmployee();
break;
case 2:
cout << "Exiting"
<< "\n";
break;
default:
cout << "Invalid choice.Please try again" <<
endl;
break;
}
cout << endl;
} while (choice != 2);
}
return 0;
};
