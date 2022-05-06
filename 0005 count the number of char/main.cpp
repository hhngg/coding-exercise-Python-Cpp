#include <iostream>
using namespace std;

int count_occurrences(string str, int start_array, int end_array, char target){
    int x = 0;
    for (int i = start_array; i<end_array+1; i++){
        if (str[i] == target){
            x = x + 1;
        }
    }
    return x;
}

int main(){
    cout << count_occurrences("AAABBBCCC", 2, 7, 'C') << endl;
    return 0;
}

####################
# result 2         #
####################
