#include <iostream>

#include <cmath>

#include <vector>

#include <string>

using namespace std;

int main() {
  float p;
  float r;
  float f;
  int t = 0;
  cout << "Enter initial deposit: $";
  cin >> p;
  cout << "Enter interest rate (%): ";
  cin >> r;
  cout << "Enter desired end amount: $";
  cin >> f;
  r = 1 + (r / 100);
  while (p < f) {
    t++;
    p = p * r;

  }
  cout << "It will take " << t << " years.";
  cout << "Ending balance = $" << p;

}