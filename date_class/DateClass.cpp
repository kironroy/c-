#include <iostream>
using namespace std; 

// Just like a struct declaration
// class declaration does not declare any memory
// It only defines what the class looks like

class DateClass // class keyword defines a new user-defined type called a class
{
public:
  int m_year;
  int m_month; 
  int m_day;

  void print()
  {
    cout << m_year << "-" << m_month << "-" << m_day;
    cout << "\n";
  }
};  // don't forget semi-colon, this is a class declaration 

int main()
{
  DateClass today = { 2020, 14, 16 };
  
  today.m_day = 16;
  today.print(); 

  return 0;
} 
    
