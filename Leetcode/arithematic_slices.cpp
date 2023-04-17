#include<bits/stdc++.h>
using namespace std;

 int numberOfArithmeticSlices(vector<int>& nums) {
     int current,prev=nums[1]-nums[0];
     int count=0,temp=0;

     for(int i=1;i<nums.size();i++){
         current=nums[i+1]-nums[i];

        if(current==prev){temp++;}
        else{prev=current;}
        count+=temp;      
    }
     return count;
}

int main(){
    vector<int> nums={1};
    cout<<numberOfArithmeticSlices(nums);
}