/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Deskripsi   : Swap
Tahun       : 2019
*/

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main() {
int x = 5;
int y = 4;
cout << "x is " << x << endl;
cout << "y is " << y << endl;
swap(x, y);
cout << "After swap" << endl;
cout << "x is " << x << endl;
cout << "y is " << y << endl;
}
