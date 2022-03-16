#include<iostream>
#include<vector>

using namespace std;

class Solution {

private:
	vector<int> nums;

public:
	Solution(vector<int> numsArr) {
		this->nums = numsArr;
	}
	vector<int> setArray();
	int deleteArray(vector<int>, int);

};
vector<int> Solution::setArray() {
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(2);
	return nums;
}
int Solution::deleteArray(vector<int> numsArr, int value) {
	int k = 0;
	auto itr = remove(numsArr.begin(), numsArr.end(), value);
	for (auto i = numsArr.begin(); i != itr; i++)
		k++;

	return k;
}

int main() {
	vector<int> numsArr;
	int value = 2;
	Solution solution(numsArr);
	numsArr = solution.setArray();
	int result = solution.deleteArray(numsArr, value);
	cout << result << endl;
	return 0;
}