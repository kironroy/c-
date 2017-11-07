#include <iostream>
using namespace std;

class Something
{
private:
    const int m_array[5];
 
public:
    Something(): m_array { 1, 2, 3, 4, 5 } // use uniform initialization to initialize our member array
    std::copy(std::begin(m_array), std::end(m_array), std::ostream_iterator<int>(std::cout, " "));
    {
    }
 
};
int main()
{
  cout << Something();
}
