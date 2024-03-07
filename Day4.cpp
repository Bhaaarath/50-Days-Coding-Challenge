//solution for "Spiral Matrix" problem in LeetCode
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size()-1, left = 0, right = matrix[0].size()-1;
        vector<int>result;

        while(top<=bottom && left<=right){
            for(int i =left; i<=right; i++){
                result.emplace_back(matrix[top][i]); //using emplace_back instead of push_back for lesser runtime 
            }
            top+=1;

            for(int i =top; i<=bottom; i++){
                result.emplace_back(matrix[i][right]);
            }
            right-=1;
            
            if(top<=bottom){
                for(int i =right; i>=left; i--){
                    result.emplace_back(matrix[bottom][i]);
                }
                bottom-=1;
            }

            if(left<=right){
                for(int i =bottom; i>=top; i--){
                    result.emplace_back(matrix[i][left]);
                }
                left+=1;
            }
        }

        return result;
    }
};
