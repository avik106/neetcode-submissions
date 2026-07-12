class Solution {
public:
   int n,m;
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ws(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
    bool ws(vector<vector<char>>& board, string word,int r,int c,int i){
        if(i==word.size()){
            return true;
        }
        if (r < 0 || c < 0 || r >= n || c >= m ||
            board[r][c] != word[i] || board[r][c] == '#') {
            return false;
        }
        board[r][c]='#';
        bool res = ws(board, word, r + 1, c, i + 1) ||
                   ws(board, word, r - 1, c, i + 1) ||
                   ws(board, word, r, c + 1, i + 1) ||
                   ws(board, word, r, c - 1, i + 1);
        board[r][c] = word[i];
        return res;
    }
};
