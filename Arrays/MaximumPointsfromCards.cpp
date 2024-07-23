class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[i];
        }
        int maxsum=sum; //assume

        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i];
            sum=sum+cardPoints[cardPoints.size()-k+i];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
