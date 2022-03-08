#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {

private:
	vector<int> nums;
	int size;

public:
	Solution(vector<int> numsArr, int sizeArr) {
		this->nums = numsArr;
		this->size = sizeArr;
	}
	vector<int> setArray();
	vector<int> sortedSquares(vector<int>);

};
vector<int> Solution::setArray() {
	nums.push_back(-4);
	nums.push_back(-1);
	nums.push_back(0);
	nums.push_back(3);
	nums.push_back(10);
	return nums;
}
vector<int> Solution::sortedSquares(vector<int> numsArr) {
	for (auto i = numsArr.begin(); i != numsArr.end(); i++) {
		(*i) *= (*i);
	}
	sort(numsArr.begin(), numsArr.end());
	return numsArr;
}

int main() {
	vector<int> numsArr;
	int sizeArr = 6;
	Solution solution(numsArr, sizeArr);
	numsArr = solution.setArray();
	vector<int> resultArr = solution.sortedSquares(numsArr);
	for (auto i = resultArr.begin(); i !=resultArr.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}