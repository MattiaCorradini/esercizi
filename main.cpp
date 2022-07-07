#include <iostream>
using namespace std;

void quadrato(int v[]){
    for (int i = 0; i < 10; ++i) {
        cout <<v[i]*v[i] <<" ";
    }
}

int main() {
    int v[10];
    for (int i = 0; i < 10; ++i) {
        cin>>v[i];
    }
    quadrato(v);
    return 0;
}
