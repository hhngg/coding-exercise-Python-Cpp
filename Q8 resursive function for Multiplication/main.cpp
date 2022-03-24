#include <iostream>
using namespace std;

int multiple_resursive(int n){
    if (n > 1){
        return n*multiple_resursive(n-1);
    }else{
        return 1;
    }
}

int main(){
    int result = multiple_resursive(5);
    cout << "The multiple result is "<< result;
    return 0;
}
