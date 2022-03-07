#include<iostream>
#include<vector>

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
	int findMaxConsecutiveOnes(vector<int>);

};
vector<int> Solution::setArray() {
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	return nums;
}
int Solution::findMaxConsecutiveOnes(vector<int> numsArr) {
	int countOne = 0;
	int maxCountOne = 0;
	for (auto i = numsArr.begin(); i != numsArr.end(); i++) {

		if (*i == 1) countOne++;
		else countOne = 0;

		maxCountOne = max(countOne, maxCountOne);
	}
	return maxCountOne;
}

int main() {
	vector<int> numsArr;
	int sizeArr = 6;
	Solution solution(numsArr, sizeArr);
	numsArr = solution.setArray();
	int count = solution.findMaxConsecutiveOnes(numsArr);
	cout << count << endl;
	return 0;
}