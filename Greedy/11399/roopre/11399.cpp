#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, inp;
    int total = 0;
    vector<int> arr;
    cin >> n;
    while(n--) {
        cin >> inp;
        arr.push_back(inp); 
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++) {
        total+=arr[i]*(arr.size()-i);
    }
    cout << total << endl;
    return 0;
}