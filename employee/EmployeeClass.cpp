#include <iostream>
#include <string>
using namespace std;

class Employee
{
public: 
  string m_name;
  int m_id;
  double m_wage; 

  // print employee information 
  void print()
  {
    cout << "Name: " << m_name <<
         "  Id: " << m_id << 
         "  Wage: $" << m_wage << '\n';
  }
}; // end class

int main()
{
  // declare 2 employees
  Employee sita = {"Sita", 1, 25.00};
  Employee gita = {"Gita", 2, 22.40}; 

  // print out the employee info
  sita.print();
  gita.print(); 

  return 0; 
}
