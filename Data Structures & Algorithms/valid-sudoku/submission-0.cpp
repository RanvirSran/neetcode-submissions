class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<int> seen;
            for(int j = 0; j < 9; j++){
                char c = board[i][j];
                if(c != '.'){
                    if(seen.count(c)) return false;
                    seen.insert(c);
                }    
            }
        }
        for(int i = 0; i < 9; i++){
            unordered_set<int> seen;
            for(int j = 0; j < 9; j++){
                char c = board[j][i];
                if(c != '.'){
                    if(seen.count(c)) return false;
                    seen.insert(c);
                }    
            }
        }
        for(int bRow = 0; bRow < 3; bRow++){
            for(int bCol = 0; bCol < 3; bCol++){
                unordered_set<int> seen;
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        char c = board[bRow * 3 + i][bCol * 3 + j];
                        if (c != '.') {
                            if (seen.count(c)) return false;
                            seen.insert(c);
                        }
                    }
                }

            }
        }
        return true;
    }
};
