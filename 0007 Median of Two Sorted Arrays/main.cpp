#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int median(vector<float> num1, vector<float> num2){
    num1.insert(num1.begin(),num2.begin(),num2.end());
    sort(num1.begin(),num1.end());

    cout << "vector:"<<" ";
    for (int i=0; i < num1.size(); i++){
        cout<< num1[i]<<" ";
    }
    cout << endl;
    cout << "median is"<< " ";

    if (num1.size()%2 == 0){
        int median1 = num1.size()/2;
        int median2 = num1.size()/2 -1;
        double median = num1[median1]+num1[median2];
        double result_median = median/2;
        cout<<result_median<<endl;
    }else{
        double median1 = num1.size()/2;
        cout<<num1[median1]<<endl;
    }
}

int main(){
    median({1,1.6,9,-8,5},{1,2,99,1.5,1.5});
    return 0;
}
