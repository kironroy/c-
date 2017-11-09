#include <iostream>
using namespace std;

class Cents
{
private:
  int m_cents;

public:
  Cents(int cents) { m_cents = cents; }
  
  int getCents() const { return m_cents; }
};

void print(const Cents &cents)
{
  cout << cents.getCents() << " cents";
}

int main()
{
  print(Cents(6)); // passing an anonymus Cents value
  cout << "\n";
  print(Cents(99));
  cout << "\n";
  return 0;
}
