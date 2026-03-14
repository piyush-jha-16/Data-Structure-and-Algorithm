#include<bits/stdc++.h>
using namespace std;
class Employee{
    private: 
    double salary;
    protected:
    int employeeId;
    public:
    string name;
    Employee(string name,int employeeId,double salary){
        this->name=name;
        this->employeeId=employeeId;
        setSalary(salary);
    }
    void setSalary(double s){
        if(salary<0){
            cout<<"Salary cannot be negative"<<endl;
            this->salary=0;
        }
        else{
            this->salary=s;
        }
    }
    double getSalary(){
        return salary;
    }
    void displayEmployeeDetails() {
        cout << "Name : " << name << endl;
        cout << "Employee Id : " << employeeId << endl;
        cout << fixed << setprecision(2);
        cout << "Salary : " << salary << endl;
    }
};
int main(){
    Employee emp1("John Doe", 12345, 50000.00);
    emp1.displayEmployeeDetails();
    return 0;
}