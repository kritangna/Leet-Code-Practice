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
	void duplicateZeros(vector<int>);

};
vector<int> Solution::setArray() {
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(0);
	return nums;
}
void Solution::duplicateZeros(vector<int> numsArr) {
	vector<int> newArr;
	for (int i = 0; i < numsArr.size(); i++) {
		newArr.push_back(numsArr[i]);
		if (newArr.size() < numsArr.size()) {
			if (numsArr[i] == 0) newArr.push_back(0);
		}
		if (newArr.size() >= numsArr.size()) break;
	}
	numsArr = newArr;
	for (int i = 0; i < numsArr.size(); i++) {
		cout << numsArr[i] << " ";
	}
}

int main() {
	vector<int> numsArr;
	int sizeArr = 6;
	Solution solution(numsArr, sizeArr);
	numsArr = solution.setArray();
	solution.duplicateZeros(numsArr);
	return 0;
}