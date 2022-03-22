#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        if (arr.size() < 3)
            return false;

        int i = 1;
        while (i < arr.size() && arr[i] > arr[i - 1])
            i++;

        if (i == 1 || i == arr.size())
            return false;

        while (i < arr.size() && arr[i] < arr[i - 1])
            i++;

        if (i == arr.size())
            return true;

        return false;
    }
};

int main() {

    vector<int> arr = { 3,5,11,0 };
    Solution solution;
    cout << solution.validMountainArray(arr) << endl;
    return 1;
}