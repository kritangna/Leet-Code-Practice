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
	int duplicateElements(vector<int>, int);

};
vector<int> Solution::setArray() {
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(4);
	return nums;
}
int Solution::duplicateElements(vector<int> numsArr, int size) {
	int k = 0;

	if (numsArr.size() == 0 || numsArr.size() == 1)
		return k = numsArr.size();

	auto itr = unique(numsArr.begin(), numsArr.end());

	for (auto i = numsArr.begin(); i != itr; i++)
		k++;

	return k;
}

int main() {
	vector<int> numsArr;
	int sizeArr = 10;
	Solution solution(numsArr, sizeArr);
	numsArr = solution.setArray();
	int result = solution.duplicateElements(numsArr,sizeArr);
	cout << result << endl;

	return 0;
}