#include <cstdio>
#include <iostream>

using std::cout, std::cin, std::printf;

int survivor(int n, int k) {
  int i = 1, ans = 0;
  while (i <= n) {
    ans = (ans + k) % i;
    i++;
  }
  return ans + 1;
}

int main() {
  int people, step;
  // Ask user for input first and store the values
  cout << "Please enter number of people and step: ";
  cin >> people >> step;
  // Figure out who lives
  printf("Survivor is #%d\n", survivor(people, step));
  return 0;
}
