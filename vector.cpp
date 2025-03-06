#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    vector<int>n;
    n.push_back(2);
    n.push_back(4);
    n.push_back(5);
    n.push_back(2);
    n.push_back(1);
    n.push_back(9);
for(auto p:n){
    cout << p << "\t";
}
}

