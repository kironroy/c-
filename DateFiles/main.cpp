#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int year, int month, int day) { SetDate(year, month, day); }

void Date::SetDate(int year, int month, int day) {
  m_year = year;
  m_month = month;
  m_day = day;
}

int main() {

  cout << "Set the Month: ";
  int month;
  cin >> month;

  cout << "Set the day: ";
  int day;
  cin >> day;

  cout << "Set the year: ";
  int year;
  cin >> year;

  Date d(year, month, day);

  cout << "The Date is: " << d.getMonth() << "/" << d.getDay() << "/" << d.getYear() << "\n";

  return 0;
}