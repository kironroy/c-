#include <iostream>
using namespace std;

struct DateStruct
{
 int year;
 int month;
 int day;
}; 

void print(DateStruct &date)
{
 cout << date.year << "-" << date.month << "-" << date.day;
} 

int main()
{
 DateStruct today = { 2020, 10, 14 }; // use uniform initialization 

 today.day = 16; // use member selection operator to select a member of te struct 
 print(today); 
 cout << "\n";
 return 0; 
}
