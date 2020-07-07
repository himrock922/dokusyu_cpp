#include <iostream>
using namespace std;

int sum(int a, int b, int c) {
  return a + b + c;
}

int main() {
  cout << "sum(5, 1, -2): " << sum(5, 1, -2) << endl;
}