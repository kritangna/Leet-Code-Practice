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
	int findNumbers(vector<int>&);

};
vector<int> Solution::setArray() {
	nums.push_back(12);
	nums.push_back(345);
	nums.push_back(2);
	nums.push_back(60);
	nums.push_back(7896);
	return nums;
}
int Solution::findNumbers(vector<int>& numsArr) {
	int numOfEvens = 0;
	for (auto i = numsArr.begin(); i != numsArr.end(); i++) {
		int count = 0;
		int num = *i;
		while (num != 0) {
			num /= 10;
			count++;
		}
		if (count % 2 == 0) numOfEvens++;
	}
	return numOfEvens;
}
int main() {
	vector<int> numsArr;
	int sizeArr = 6;
	Solution solution(numsArr, sizeArr);
	numsArr = solution.setArray();
	int result = solution.findNumbers(numsArr);
	cout << result << endl;
	return 0;
}