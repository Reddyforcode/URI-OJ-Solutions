/*
 *
 * Solution with lnongs*/
#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;
int carry_operation(ll a, ll b){
    int v1, v2, carry=0, n_carry = 0, suma;

    while(true) {
        v1 = a%10;
        v2 = b%10;
        a /= 10;
        b /= 10;
        suma = v1 + v2 + carry;
        if(suma >= 10) {
            carry = 1;
            n_carry++;
        }else{
            carry = 0;
        }
        if(a==0 and b==0)   break;
    }
    return n_carry;
}

int main() {
    ll n1, n2;

    while(cin >> n1 >> n2) {
        if(n1 == 0LL and n2 == 0LL) break;
        int n_carry = carry_operation(n1, n2);
        if(n_carry == 0)    cout << "No carry operation.\n";
        else if(n_carry == 1)    cout << "1 carry operation.\n";
        else    cout << n_carry << " carry operations.\n";

    }
    return 0;
}


/*
 * #include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n1, n2;

    while(cin >> n1 >> n2) {
        if(n1 == "0" and n2 == "0") break;
        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());
//        cout << n1 << endl;
//        cout << n2 << endl;

        int v1, v2, carry=0, n_carry = 0, suma;
        int s_n1=n1.size(), s_n2=n2.size();

        for (int i = 0; i < max(s_n1, s_n2); i++) {
            if(i<n1.size()) {
                v1 = n1[i] - 48;
            } else  v1 = 0;

            if(i<n2.size()) {
                v2 = n2[i] - 48;
            } else  v2 = 0;

            suma = v1 + v2 + carry;
            if(suma >= 10) {
                carry = 1;
                n_carry++;
            }else{
                carry = 0;
            }
        }
        if(n_carry == 0)    cout << "No carry operation.\n";
        else if(n_carry == 1)    cout << "1 carry operation.\n";
        else    cout << n_carry << " carry operations.\n";

    }
    return 0;
}

 */