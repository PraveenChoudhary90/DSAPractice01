#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main(){
    vector<int>nums;
    int n = nums.size();
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j =0;j<n;j++){
        if(nums[i]==nums[j]){

            count++;

        }
    }
    if(count>n/2){return nums[i];}
    }return 0;

}