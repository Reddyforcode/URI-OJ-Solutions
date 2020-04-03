#include <iostream>

using namespace std;

int rafael(int x, int y){
    return (3*3*x*x) + (y*y);
}

int beto(int x, int y){
    return (2*(x*x)) + (25*y*y);
}
int carlos(int x, int y){
    return (-100*x) + (y*y*y);
}
int main() {
    int n;
    cin >> n;
    int x, y;

    while(n--){
        int val_max = 0;
        string s_mayor = "";
        cin >> x >> y;
        int raf = rafael(x, y);
        int bet = beto(x, y);
        int carl = carlos(x, y);
        if( raf > val_max){
            s_mayor = "Rafael ganhou";
            val_max = raf;
        }
        if( bet > val_max){
            s_mayor = "Beto ganhou";
            val_max = bet;
        }

        if( carl > val_max){
            s_mayor = "Carlos ganhou";
            val_max = carl;
        }

        cout << s_mayor << "\n";

    }
    return 0;
}
