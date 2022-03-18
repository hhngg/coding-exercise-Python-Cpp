////Write a function Join that take in 2 string parameters called str1 and str2 and an integer parameter p.
//If p==0, the function returns a string with str1 followed by str2 otherwise the function returns with str2 followed by str1.
//For examples, Join ("ABC", "DEF", 0) returns "ABCDEF" and Join ("ABC", "DEF", 1) returns "DEFABC".

#include <iostream>
#include <string>
using namespace std;

void join(string str1, string str2, int p){
    if (p == 0){
        cout << str1 << str2;
    } else if (p == 1){
        cout << str2 << str1;
    } else{
        cout << "wrong number, only type 0 or 1" << endl;
    }
}

int main(){
    join("ABC", "CDE", 0);
    cout << endl;
    join("ABC", "CDE", 1);
    cout << endl;
    join("ABC", "CDE", 2);
}

####################################
# result                           #
#                                  #
# ABCCDE                           #
# CDEABC                           #
# wrong number, only type 0 or 1   #
####################################
