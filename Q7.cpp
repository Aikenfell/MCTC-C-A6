#include <iostream>

#include <cmath>

#include <vector>

#include <string>

using namespace std;

void rep(int count, char whatevs) {
  int i = 0;

  while (i < count) {
    cout << whatevs;

    i++;
  }

}

int main() {
  int c;
  cout << "Enter number of rows (>0): ";
  cin >> c;
  if (c < 1) {
    do {
      cout << "Invalid entry – try again!\nEnter a positive integer: ";
      cin >> c;

    } while (c < 1);

  }

  int n = 0;

  do {
    rep(c - (n + 1), ' ');
    rep(1 + (n * 2), '*');
    cout << "\n";
    n++;
  } while (n < c);

}