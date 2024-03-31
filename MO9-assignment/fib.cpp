#include <iostream>

using std::cout, std::cin;

int fib(int n) {
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  cout << "Input nth fibonacci number: ";
  int n;
  cin >> n;
  cout << fib(n) << '\n';
  return 0;
}
