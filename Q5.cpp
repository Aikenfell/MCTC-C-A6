#include <iostream>

#include <cmath>

#include <vector>

#include <string>

using namespace std;

int main() {
    int n = 5;
    int tr;
    string Bin = "";
    cout << "Enter a positive integer: ";
    cin >> n;
    int r = n;
        while (n > 0) {
            tr = n%2;
            n = n/2;
      switch (tr) {
      case 1:
        Bin = "1" + Bin;
        break;
      case 0:
        Bin = "0" + Bin;
        break;

      }
    }
      cout << r << " decimal = "<< Bin << " binary";
}