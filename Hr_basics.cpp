#include <iostream>
#include <string>
#include <vector>

class Employee {
public:
    std::string name;
    int age;
    std::string position;
    double salary;

    Employee(std::string name, int age, std::string position, double salary)
        : name(name), age(age), position(position), salary(salary) {}
};

class HR {
private:
    std::vector<Employee> employees;

public:
    void addEmployee(std::string name, int age, std::string position, double salary) {
        employees.push_back(Employee(name, age, position, salary));
    }

    void displayEmployees() {
        std::cout << "Employee List:" << std::endl;
        for (auto& employee : employees) {
            std::cout << "Name: " << employee.name << ", Age: " << employee.age
                      << ", Position: " << employee.position << ", Salary: " << employee.salary << std::endl;
        }
    }
};

int main() {
    HR hr;

    hr.addEmployee("John Doe", 32, "Developer", 50000);
    hr.addEmployee("Jane Doe", 28, "Manager", 60000);

    hr.displayEmployees();

    return 0;
}
