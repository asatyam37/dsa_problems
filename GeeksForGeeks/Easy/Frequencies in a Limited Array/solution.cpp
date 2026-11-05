class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> hash(n, 0);
        for(int i = 0; i< arr.size(); i++){
            hash[arr[i]-1]++;
        }
    
        return hash;
    }
};
