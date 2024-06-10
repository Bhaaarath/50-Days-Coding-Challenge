int speedup = []{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    	return 0;
}();

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	vector<int>row(n, 0);
	vector<int>colm(m, 0);
	for(int i=0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				colm[j] = 1;	
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(row[i] == 1 || colm[j] == 1){
				matrix[i][j] = 0;				
			}
		}
	}


	return matrix;
}
