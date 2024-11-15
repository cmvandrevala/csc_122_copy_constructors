#include <iostream>

using namespace std;

class Foo
{
public:
  int bar;
  Foo(int b) : bar(b) {}
};

int main()
{
  Foo foo_one(10);

  // The compiler implicitly defines a default copy constructor.
  Foo foo_two = foo_one;

  cout << foo_one.bar << endl;
  cout << foo_two.bar << endl;
}
