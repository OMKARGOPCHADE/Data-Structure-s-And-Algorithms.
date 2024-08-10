#include <bits/stdc++.h>
using namespace std;
bool exist(vector<vector<char>> &board, string word)
{
    int cnt = 0;
    for (int i = 0; i < word.length(); i++)
    {
        for (int e = 0;e<board.size();e++)
        {
            int c=0;
            for (int j = 0; j < board[e].size(); j++)
            {
                if (word[i] == board[e][j])
                {
                    c=1;
                    cnt++;
                    cout<<word[i]<<" "<<i<<" "<<e<<endl;
                    board[e].erase(board[e].begin() + j);
                    break;
                }
                
            }
            if(c) break;
        }
    }
    if (cnt == word.length())
        return true;
    return false;
}
int main()
{
    vector<vector<char>> vc = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string str = "ABCB";
    cout << exist(vc, str);
    return 0;
}