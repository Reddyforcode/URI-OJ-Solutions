/*
 * Author: Reddy Tintaya
 * Problem Id: 1873
 * Name: Rock-paper-scissors-lizard-Spock
 * Category: Strings
 */

#include <iostream>

using namespace std;
enum Options {
    Scissors,
    Paper,
    Rock,
    Lizard,
    Spock,
    None
};

Options resolveOption(string input){
    if(input == "tesoura")      return Scissors;
    else if (input == "papel")  return Paper;
    else if (input == "pedra")  return Rock;
    else if (input == "lagarto")return Lizard;
    else if (input == "spock")  return Spock;
    else return None;
    
}


string checkWinner(Options sheldon, Options raj){
    bool message = false;
    if(sheldon==raj)    return "empate";

    switch (sheldon){
        case Scissors :
            if (raj == Paper or raj == Lizard)   message = true;
            break;
        case Paper:
            if (raj == Rock or raj == Spock)   message = true;
            break;
        case Rock:
            if (raj == Scissors or raj == Lizard)   message = true;
            break;
        case Lizard:
            if (raj == Paper or raj == Spock)   message = true;
            break;
        case Spock:
            if (raj == Scissors or raj == Rock)   message = true;
            break;
        default:
            message = "none";
            break;

    }
    if(message) return "rajesh";
    else return "sheldon";
}

int main() {
    int n;
    cin >> n;
    string sheldon, raj;

    while(n--){
        cin >> sheldon >> raj;

        cout << checkWinner(resolveOption(sheldon), resolveOption(raj)) << endl;
    }

    return 0;
}
