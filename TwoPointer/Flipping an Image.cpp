//  https://leetcode.com/submissions/detail/582994908/

class Solution {
public:
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int size = image.size();
        
        for(int k=0; k<size; k++){
            for(int i=0, j=size-1; i<=j; i++, j--){
                
                if(image[k][i] == 0 && image[k][j] == 0){
                    image[k][i] = 1;
                    image[k][j] = 1;
                }else if(image[k][i] == 0 && image[k][j] == 1){
                    image[k][i] = 0;
                    image[k][j] = 1;
                }else if(image[k][i] == 1 && image[k][j] == 0){
                    image[k][i] = 1;
                    image[k][j] = 0;
                }else{
                    image[k][i] = 0;
                    image[k][j] = 0;
                }
            }
        }
        
        return image;
    }
};
