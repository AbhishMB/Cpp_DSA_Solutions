/////////// GIVEN A SORTED ARRAY CONTAINING ONLY 1'S AND 0'S FIND ROW WITH MAXIMUM NO OF ONES.


int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    // Write Your Code Here

    // int maxrow = -1;
    // int maxones = INT_MIN;
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(matrix[i][j]==1){
    //             int no_ofones = m - j;
    //             if(no_ofones>maxones){
    //                 maxones = no_ofones;
    //                 maxrow = i;
    //             }
    //             break;
    //         }
    //     }
    // }

    // if(maxrow==-1) return -1;
    // return maxrow;
//// --------------------------------------------------------------------   OR ------------------------------------------------------------------------------
    int maxonesrow = INT_MIN;
    int j = matrix[0].size()-1;
    int r = matrix.size();

    for(int i=0;i<r;i++ ){

        while(j>=0 && matrix[i][j]==1){
            maxonesrow = i;
            j--;
        }
    }
if(maxonesrow == INT_MIN) return -1;
return maxonesrow;

}
