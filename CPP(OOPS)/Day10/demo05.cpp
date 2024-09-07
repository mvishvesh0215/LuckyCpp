#include <iostream>
#include <fstream>
#include <sstream>
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

    void accept()
    {
        cout << "Enter the id - ";
        cin >> id;
        cout << "Enter the name - ";
        cin >> name;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    void display()
    {
        cout << "Id - " << id << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
};
class Student
{
    // TO-DO
};

void loadEmployees(vector<Employee *> &empList)
{
    ifstream fin("emp.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream data(line);
        string id, name, salary;
        getline(data, id, ',');
        getline(data, name, ',');
        getline(data, salary, ',');
        empList.push_back(new Employee(stoi(id), name, stod(salary)));
        // Employee *ptr = new Employee(stoi(id), name, stod(salary));
        // empList.push_back(ptr);
    }
    fin.close();
    cout << "***************************" << endl;
    cout << "Employee data is loaded...." << endl;
    cout << "***************************" << endl;
}

void saveEmployees(vector<Employee *> &empList)
{
    ofstream fout("emp.txt");
    for (int i = 0; i < empList.size(); i++)
    {
        Employee *e = empList[i];
        fout << e->getId() << "," << e->getName() << "," << e->getSalary() << endl;
    }
    fout.close();
    cout << "***************************" << endl;
    cout << "Employee data is saved...." << endl;
    cout << "***************************" << endl;
}

int findEmployee(vector<Employee *> &empList)
{
    int id;
    cout << "Enter id to search .. ";
    cin >> id;
    for (int i = 0; i < empList.size(); i++)
        if (id == empList[i]->getId())
            return i;
    return -1;
}

void loadStudents(vector<Student *> &studentList)
{
    // To-Do
}

void saveStudents(vector<Student *> &studentList)
{
    // To-Do
}

int findStudent(vector<Student *> &studentList)
{
    // To-Do
    return 0;
}

int main()
{
    vector<Employee *> empList;
    vector<Student *> studentList;
    loadEmployees(empList);
    loadStudents(studentList);

    // start the menudriven code from here

    // case of Accept Employee
    Employee *e = new Employee();
    e->accept();
    empList.push_back(e);

    // case of erase Employee
    int index = findEmployee(empList);
    if (index != -1)
    {
        empList.erase(empList.begin() + index);
        cout << "Employee deleted..." << endl;
    }
    else
        cout << "Employee not found..." << endl;

    // case of Display Employee
    for (int i = 0; i < empList.size(); i++)
        empList[i]->display();

    // end of menu driven code

    saveEmployees(empList);
    saveStudents(studentList);
    return 0;
}