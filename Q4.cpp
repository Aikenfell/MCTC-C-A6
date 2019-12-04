#include <iostream>

#include <cmath>

#include <vector>

#include <string>

using namespace std;

int main() {
    string Fin;
    string Tem;
    cout << "Enter a sentence: ";
    cin >> Fin;
    int i = 0;
    bool pas = true;
    while (pas == true) {
        if (Tem == "!" || Tem == "?" || Tem == ".") {
            pas = false;
        } else {
            cin >> Tem;
            Fin = Fin + " " + Tem;
        }
    }
    string Long = "";
    Tem = "";
    int LW;
    int WV = 0;
    float AW = 0;
    cout << "\n\n";
    while (i < Fin.length()) {
        if (Fin[i] == ' ') {
            if (Tem.length() != 0){
                WV++;}
            if (Tem.length() > Long.length()) {
                Long = Tem;
            }
            Tem = "";
        } else {
            if (isalpha(Fin[i]))
            {
            Tem = Tem + Fin[i];
            AW++;

            }
            
        }
        i++;
    }
    cout << "Number of words = " << WV << "\n";
    cout << "Average word length = " << AW/WV << "\n";
    cout << "Longest word: " << Long;

}