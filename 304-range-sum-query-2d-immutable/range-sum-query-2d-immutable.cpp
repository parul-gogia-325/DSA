class NumMatrix {
public:
vector<vector<int>>matrixCF;
    NumMatrix(vector<vector<int>>& matrix) {
matrixCF=matrix;
        for(int i=1; i<matrixCF[0].size() ; i++){
            matrixCF[0][i] = matrixCF[0][i-1]+matrixCF[0][i];
        }

        for(int i=1; i<matrixCF.size() ; i++){
            matrixCF[i][0]=matrixCF[i-1][0] +matrixCF[i][0];
        }
        for(int i=1; i<matrixCF.size() ; i++){
            for(int j=1; j<matrixCF[0].size() ; j++){
                matrixCF[i][j]= matrixCF[i][j]+matrixCF[i-1][j]+matrixCF[i][j-1]-matrixCF[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
     
         int s =matrixCF[row2][col2];
         int a =0,b=0, c=0;
         if(row1==0){
            a=0;c=0;
         }
         else{
            a=matrixCF[row1-1][col2];
         }
         if(col1==0){b=0;c=0;}
         else{
            b=matrixCF[row2][col1-1];
         }
         if(row1==0|| col1==0){
            c=0;
         }
         else {
            c= matrixCF[row1-1][col1-1];
         }
        int ans = s-a-b+c;
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */