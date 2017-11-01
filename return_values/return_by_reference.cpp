#include <array>
#include <iostream>

using namespace std;

// returns a reference to the index element of array
int& getElement(array<int, 25> &array, int index)
{
 return array[index];
}

int main()
{
 array<int, 25> array;
 getElement(array, 10) = 5;
 cout << array[10] << '\n';
 
 return 0; 
} 

