class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int max=0;
        for(int i=0; i<candies.size(); i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        for(int i=0; i<candies.size(); i++){
            if(max <= candies[i] + extraCandies){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }
        return result;
    }
};
