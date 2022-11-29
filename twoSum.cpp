#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(){
    vector<int> input{2, 7, 11, 15};
    int targetInput{9};
    twoSum(input, targetInput);


}

vector<int> twoSum(vector<int>& nums, int target){
    
    for (int i{0};i<sizeof(nums);i++){
        vector<int> output={};
        int x=target-nums[i];
        for (int j{1};j<sizeof(nums);i++){
            if (nums[j]==x){
                output[0]=nums[i];
                output[1]=x;
                
            }
            
            
        }
        
        return output;
}
}