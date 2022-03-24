#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sort_num_acc(vector<int> num){
    sort(num.begin(), num.end());
    for (int i=0; i<num.size(); i++){
        cout<<num[i]<<' ';
    }
}

int main(){
    sort_num_acc({10,9,5,7,99,5,70,-88,-9});
    return 0;
}
