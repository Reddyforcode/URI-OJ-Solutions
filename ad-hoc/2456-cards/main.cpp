#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int cont_a=0, cont_b=0;
    for (int i=0; i < a.size(); i++ ){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i]!=b[i]){
            cont_a = a[i];
            cont_b = b[i];
            break;
        }
    }

    if(cont_a<cont_b)   cout << "-1\n";
    else if(cont_b<cont_a)   cout << "1\n";
    else cout << "0\n";



    return 0;
}

