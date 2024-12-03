 #include<iostream>
 #include<vector>
 using namespace std;


 double findMaxAverage(vector<int>& nums, int k) {
       double current_sum = 0;
       double max_sum;

       for(int i = 0; i < k ; i++){
        current_sum += nums[i];

       }


        int i ,j;
        max_sum = current_sum;
       for(i = 0, j = k  ; j < nums.size() ; i++ , j++ ){
          current_sum = current_sum - nums[i] + nums[j];

          max_sum = max(current_sum , max_sum);
       }


    double average = max_sum / k;

       return average;

    }



    int main(){
     vector<int> nums = {1,12,-5,-6,50,3}; int k = 4;

     cout<<findMaxAverage( nums , k );

    }
