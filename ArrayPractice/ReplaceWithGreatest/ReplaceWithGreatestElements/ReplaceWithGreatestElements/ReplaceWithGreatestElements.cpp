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
	vector<int> replaceElements(vector<int>);

};
vector<int> Solution::setArray() {
	nums.push_back(17);
	nums.push_back(18);
	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(6);
	nums.push_back(1);
	return nums;
}
vector<int> Solution::replaceElements(vector<int> numsArr) {
	int maxRight = -1, temp = 0;

	for (int i = numsArr.size() - 1; i >= 0; i--) {
		temp = maxRight;
		if (numsArr[i] > maxRight) {
			maxRight = numsArr[i];
		}
		numsArr[i] = temp;
	}
	return numsArr;
}

int main() {
	vector<int> numsArr;
	Solution solution(numsArr);
	numsArr = solution.setArray();
	vector<int> result = solution.replaceElements(numsArr);
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;

	return 0;
}