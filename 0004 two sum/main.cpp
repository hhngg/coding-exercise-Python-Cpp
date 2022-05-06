//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution,
//and you may not use the same element twice. You can return the answer in any order.


#include <iostream>
#include <vector>
using namespace std;

int twosum(vector <int> num, int target){
    int k = 0;
    for (int i=0; i<num.size(); i++){
        for (int j=0; j<i; j++){
            if (num[i] + num[j] == target){
                    printf("Output:[%d, %d] \n", j, i);
            }
        }
    }
}

int main(){
    twosum({1,5,8,9,20,50}, 59);
}

#########################
# Output:[3, 5]         #
#########################
