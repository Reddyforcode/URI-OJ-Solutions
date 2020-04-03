#include <iostream>

using namespace std;


int main() {

    int consumo, price;
    cin >> consumo;
    if(consumo <= 10)   price = 7;
    else if(consumo >= 11 and consumo <= 30)    price = 7 + (consumo - 10)*1;
    else if(consumo >= 31 and consumo <= 100)    price = 27 + (consumo - 30)*2;
    else price = 167 + (consumo - 100)*5;


    cout << price << endl;
    return 0;
}
