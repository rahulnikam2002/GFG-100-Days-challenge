// Two players, Player 1 and Player 2, are given an integer N to play a game. The rules of the game are as follows :
// 1. In one turn, a player can remove any set bit of N in its binary representation to make a new N.
// 2. Player 1 always takes first turn.
// 3. If a player cannot make a move, he loses.

// Example 1:

// Input:
// N = 8
// Output:
// 1
// Explanation:
// N = 8
// N = 1000 (binary)
// Player 1 takes the bit.
// The remaining bits are all zero.
// Player 2 cannot make a move,
// so Player 1 wins.

// Example 2:
// Input:
// N = 1
// Output:
// 1
// Explanation:
// N = 0001
// Player 1 takes one in one
// move, so Player 2 loses.

// Code =>
public:
int swapBitGame(long long N)
{
    // code here
    int count = 0;
    while (N > 0)
    {
        if ((N & 1) == 1)
            count++;
        N = N / 2;
    }
    return count % 2 == 1 ? 1 : 2;
}

// Profile Link - https://auth.geeksforgeeks.org/user/rahulnikam/practice