#include <iostream>
using namespace std;

int main()
{
  string log1 = "hello1 World123";
  int m = 1;
  bool b = true;
  string log2 = "Me";
  string log3 = "bool is false";
  if (b)
  {
    cout << log1 << " " << m << " " << log2;
  }
  else
  {
    cout << log3;
  }
  return 0;
}