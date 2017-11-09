#include <iostream>
using namespace std;

class Cents {
private:
  int m_cents;

public:
  Cents(int cents) { m_cents = cents; }

  int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2) {
  return Cents(c1.getCents() + c2.getCents()); // return anonymous Cents value
}

int main() {
  cout << "I have " << add(Cents(6), Cents(8)).getCents() << " cents."
       << endl; // print anonymous Cents value
  cout << "I have " << add(Cents(61), Cents(28)).getCents() << " cents."
       << endl; // print anonymous Cents value

  return 0;
}
