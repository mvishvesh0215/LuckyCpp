#include <iostream>
#include <vector>
using namespace std;
class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee()
    {
    }

    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout << "Empid = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }
    int getId()
    {
        return id;
    }
};

int main()
{
    vector<Employee> empList;
    empList.push_back(Employee(1, "Anil", 10000));
    empList.push_back(Employee(2, "Mukesh", 10000));
    empList.push_back(Employee(3, "Ramesh", 10000));
    empList.push_back(Employee(4, "Suresh", 10000));

    cout << "size of empList - " << empList.size() << endl;
    cout << "capacity of empList - " << empList.capacity() << endl;

    for (int i = 0; i < empList.size(); i++)
        empList[i].display();

    // TO-DO
    //- create the vector of Employee * as goven below
    // vector<Employee*> empList2;
    // Provide a menu driven code for for adding, displaying,
    // finding the employees and deleting them from the above vector
    return 0;
}

int main1()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "Element at index 2 = " << v1.at(2) << endl;
    cout << "Element at index 2 = " << v1[2] << endl;

    cout << "size of v1 - " << v1.size() << endl;
    cout << "capacity of v1 - " << v1.capacity() << endl;

    cout << "Using Iterator ->" << endl;
    for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); itr++)
        cout << *itr << endl;

    // v1.pop_back();
    v1.erase(v1.begin() + 2);

    cout << "Using index ->" << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    return 0;
}
