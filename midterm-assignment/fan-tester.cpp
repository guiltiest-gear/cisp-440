#include <iostream>

using std::cout;

void results(int m, int h, int o, bool final);

int main() {
  // Print the title
  cout << "\t\tFan Tester Logic\n";

  // Now the headers
  cout << "\tM  H  O  (M^H)vO  My Observation\n\n\n";

  // Now do the testing
  // Use reverse for loops because normal for loops put the table in the wrong
  // direction
  for (int m = 1; m >= 0; m--) {
    for (int h = 1; h >= 0; h--) {
      for (int o = 1; o >= 0; o--) {
        bool expr = (m && h) || o;
        results(m, h, o, expr);
      }
    }
  }

  // Final remark
  cout << "=> If true, the fan will turn off.\n";
  return 0;
}

// Print the results
void results(int m, int h, int o, bool final) {
  // Account for the fact that 0 is false and 1 is true
  if (m == 0)
    cout << "\tF  ";
  else
    cout << "\tT  ";

  if (h == 0)
    cout << "F  ";
  else
    cout << "T  ";

  if (o == 0)
    cout << "F  ";
  else
    cout << "T  ";

  // final is a bool, no need for a comparison operator
  if (final)
    cout << "T\t  T\n";
  else
    cout << "F\t  F\n";
}
