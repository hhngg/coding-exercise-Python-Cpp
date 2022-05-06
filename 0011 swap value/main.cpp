#include <iostream>

using namespace std;

int main(){
    int x = 30;
    int y = 40;

    int temp = x;
    x = y;
    y = temp;

    cout << "x:"<< x << endl;
    cout << "y:"<< y << endl;

}
