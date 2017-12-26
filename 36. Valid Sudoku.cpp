lass Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows
        for(int i=0;i<9;i++)
        {
            int arr[10]={0};
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                if(arr[board[i][j]-'0']==1)return false;
                arr[board[i][j]-'0']++;
               
            }
        }
               for(int j=0;j<9;j++)
        {
            int arr[10]={0};
            for(int i=0;i<9;i++)
            { if(board[i][j]=='.')continue;
                if(arr[board[i][j]-'0']>0)return false;
                arr[board[i][j]-'0']++;
               
            }
        }
        //check every cell
       for(int k=0;k<6;)
       {
           for(int l=0;l<6;l++)
           { for(int i=k;i<3+k;i++)
        {
            int arr[10]={0};
            for(int j=0+l;j<3+l;j++)
            {
                 if(board[i][j]=='.')continue;
                if(arr[board[i][j]-'0']>0)return false;
                arr[board[i][j]-'0']++;
            }
        }
            l=l+3;
           }
           k=k+3;
    }
        return true;
    }
};
