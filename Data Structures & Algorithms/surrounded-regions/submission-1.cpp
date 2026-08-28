class Solution {
public:
    void capture(vector<vector<char>>& board,int r,int c){
        if(r<0||c<0||r>=board.size()||c>=board[0].size()||board[r][c]!='O'){
            return;
        }
        board[r][c]='T';
        capture(board,r+1,c);
        capture(board,r-1,c);
        capture(board,r,c+1);
        capture(board,r,c-1);

    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                capture(board,i,0);
            }
            if(board[i][m-1]=='O'){
                capture(board,i,m-1);
            }
        }
        for(int j=0;j<m;j++){
            if(board[0][j]=='O'){
                capture(board,0,j);
            }
            if(board[n-1][j]=='O'){
                capture(board,n-1,j);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='T'){
                    board[i][j]='O';
                }
            }
        }
    }
};
