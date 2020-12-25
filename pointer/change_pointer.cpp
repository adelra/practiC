#include <iostream>
using namespace std;
int main() {
  int myVar = 8;
  int* ptr = &myVar;
  cout << myVar <<endl;
  *ptr = 9;
  cout << myVar <<endl;
}
