// https://www.acmicpc.net/problem/10430
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a+b)%c << endl;
    cout << (a%c + b%c)%c << endl;
    cout << (a*b)%c << endl;
    cout << (a%c * b%c)%c << endl;

    return 0;
}