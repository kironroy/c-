#include <iostream>
#include <string>
#include <algorithm>

void sortArray(std::string *array, int length)
{
  // step through each element of the array
  for (int startIndex = 0; startIndex < length; ++startIndex)
  {
    // smallestIndex is the index of the smallest element we've got so far
    int smallestIndex = startIndex;
    // look for smallest element remaining in the array (starting @ startIndex+1)
    for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
    {
      // if the current element is smaller than the prev
      if (array[currentIndex] < array[smallestIndex])
      // this is the new smallest number for this iteration
      smallestIndex = currentIndex;
    }
    // swap our start element w/ our smallest element 
    std::swap(array[startIndex], array[smallestIndex]);
  }
} // end void() brace

int main()
{
  std::cout << "How many names would like to enter? ";
  int length;
  std::cin >> length;

  // allocate an array to hold the names
  std::string *names = new std::string[length];

  // ask user to enter all the names
  for (int i = 0; i < length; ++i)
  {
    std::cout << "Enter name #" << i + 1 << ": ";
    std::cin >> names[i];
  }

  // sort the array
  sortArray(names, length);

  std::cout << "\nHere is your sorted list:\n";
  // print the sorted array
  for (int i = 0; i < length; ++i)
    std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
  delete[] names; // don't forget to use array delete
           names = 0;
  return 0;

} // end main() brace
