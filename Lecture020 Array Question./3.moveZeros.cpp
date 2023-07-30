// move all zeros to the right and preserve the order of non zeros value.
#include <vector>
#include <iostream>
using namespace std;

void moveZeros(vector<int>& nums) {

    //what is this function doing 
    // Shift all the non zeros element to the left.
    int nonZero = 0;

    for(int j = 0; j<nums.size(); j++) {
        if(nums[j] != 0) {
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
    }
}
 
int main()
{
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(0);
    nums.push_back(1);

    moveZeros(nums);

    for(int x: nums) {
        cout << x << " ";
    }

    return 0;
}