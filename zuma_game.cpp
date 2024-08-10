#include <bits/stdc++.h>
using namespace std;
int findMinStep(string board, string hand)
{
    int s = 0;
    while (board.length())
    {
        if (board.length() == 0)
        {
            for (auto i : hand)
            {
                if (i == board[0])
                {
                    board.erase(board.begin());
                    s++;
                    break;
                }
            }
        }
        else
        {

            for (int i = 0; i < board.length(); i++)
            {
                if (board[i] == board[i + 1] && board[i] == board[i + 2])
                {
                    board.erase(board.begin() + i, board.begin() + i + 3);
                }
                else if (board[i] == board[i + 1])
                {
                    for (auto j : hand)
                    {
                        if (j == board[i])
                        {
                            board.erase(board.begin() + i, board.begin() + i + 2);
                            s++;
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    if(s)
        return s;
    return -1;
}
int main()
{
    cout << findMinStep("G", "GGGG");
    return 0;
}