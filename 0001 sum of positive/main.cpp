//Write a recursive function called AddPos that take in an array of integers intarr
//and an integer parameter size that holds the number of values in intarr.
//The function sums up all positive values in intarr and return it.
//For example AddPos ({-1, 1, -1, 1, -1}, 5) returns 2 (1+1).

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 0;
    vector <int> n  = {11, -12, 13, -14, 15, -16, 17, -18};
    cout << "The array is :" << endl;

    for (int i = 0; i < n.size(); i++){
        cout << n[i] << " ";

        if (n[i] > 0){
            a  = n[i] + a;
        }
    }
    cout << endl;
    cout << endl;
    cout << "The sum of all positive is :"<< a << endl;
}

##############################################
# result                                     #
# The array is :                             #
# 11 -12 13 -14 15 -16 17 -18                #
#                                            #
# The sum of all positive is :56             #
##############################################
