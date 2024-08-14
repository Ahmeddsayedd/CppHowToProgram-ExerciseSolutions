#include <string> // Include the string library to use the string data type.

class Employee {
public:
    Employee(std::string fn, std::string ln, int s);

    void setFirstName(std::string name);
    void setLastName(std::string name);
    void setSalary(int salary);

    std::string getFirstName();
    std::string getLastName();
    int getSalary();

private:
    std::string firstName, lastName;
    int monthlySalary;
};
