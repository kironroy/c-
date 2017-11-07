#include <iostream>
using namespace std;

// mixing access specifiers

class DateClass // members are private by default 
{
  int m_month;
  int m_day; 
  int m_year; 

public: // access specifier: who has access to members that follow the specifier
  void setDate(int month, int day, int year) // public, access for all 
  {
  // setDate() can access the private members of the class
  // because it's a member of the class itself!!!
  m_month = month;
  m_day = day; 
  m_year = year; 
  }

  void print() // public, can be accessed by anyone 
  {
   cout << m_month << "-" << m_day << "-" << m_year;
  }
}; // end the class with a ; 
	
int main()
{
  DateClass date;
  date.setDate(10, 14, 2020); // setDate() is public
  date.print(); // print() is public 

  return 0; 
}  
