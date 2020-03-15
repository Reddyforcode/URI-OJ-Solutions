/*
 * Author: Reddy Tintaya
 * Problem Id: 1873
 * Name: Rock-paper-scissors-lizard-Spock
 * Category: Strings
 */

#include <iostream>

using namespace std;

string checkWinner(string sheldon, string raj){
    if(sheldon==raj)    return "empate";
    return "as";
}

int main() {
    int n;
    cin >> n;
    string sheldon, raj;
    while(n--){
        cin >> sheldon >> raj;
        cout << checkWinner(sheldon, raj) << endl;
    }

    return 0;
}
