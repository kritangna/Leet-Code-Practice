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
	bool findDoubleTheElement(vector<int>);

};
vector<int> Solution::setArray() {
	nums.push_back(10);
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(3);

	return nums;
}
bool Solution::findDoubleTheElement(vector<int> numsArr) {
	for (int i = 0; i < numsArr.size() - 1; i++)
	{
		for (int j = i + 1; j <= numsArr.size() - 1; j++)
		{
			if (numsArr[i] == 2 * numsArr[j] || numsArr[j] == 2 * numsArr[i])
			{
				return true;
			}
		}
	}
	return false;
}

int main() {
	vector<int> numsArr;
	Solution solution(numsArr);
	numsArr = solution.setArray();
	bool result = solution.findDoubleTheElement(numsArr);
	cout << result << endl;
	return 0;
}