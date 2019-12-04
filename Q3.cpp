#include <iostream>

#include <cmath>

#include <vector>

#include <string>

using namespace std;

string province(string Pro) {
    if (Pro == "AB") {
        Pro = "Alberta";
    } else if (Pro == "BC") {
        Pro = "British Columbia";
    } else if (Pro == "MB") {
        Pro = "Manitoba";
    } else if (Pro == "NB") {
        Pro = "New Brunswick";
    } else if (Pro == "NF") {
        Pro = "Newfoundland";
    } else if (Pro == "NS") {
        Pro = "Nova Scotia";
    } else if (Pro == "NT") {
        Pro = "Northwest Territories";
    } else if (Pro == "ON") {
        Pro = "Ontario";
    } else if (Pro == "PE") {
        Pro = "Prince Edward Island";
    } else if (Pro == "PQ") {
        Pro = "Quebec";
    } else if (Pro == "SK") {
        Pro = "Saskatchewan";
    } else if (Pro == "YK") {
        Pro = "Yukon";
    }
    return Pro;

}

int main() {
    string Cit;
    string Pro;
    cout << "Enter city: ";
    getline(cin, Cit);
    cout << "Enter province abbreviation: ";
    cin >> Pro;
    string Fin = "You entered: " + Cit + ", " + province(Pro);
    cout << Fin;
}