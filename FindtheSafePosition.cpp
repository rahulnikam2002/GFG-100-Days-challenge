// There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed. The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
// Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.

// Example 1:

// Input:
// n = 2, k = 1
// Output:
// 2
// Explanation:
// Here, n = 2 and k = 1, then safe position is
// 2 as the person at 1st position will be killed.
// Example 2:

// Input:
// n = 4, k = 2
// Output:
// 1
// Explanation:
// The safe position is 1.

public:
void findSafePos(int idx, int k, int &safePosition, vector<int> &v)
{
    if (v.size() == 1)
    {
        safePosition = v[0];
        return;
    }
    int deleteIdx = (idx + k) % v.size();
    v.erase(v.begin() + deleteIdx);
    findSafePos(deleteIdx, k, safePosition, v);
}

int safePos(int n, int k)
{
    int safePosition = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    k--;
    int idx = 0;
    findSafePos(idx, k, safePosition, v);
    return safePosition;
}

// Profile Link - https://auth.geeksforgeeks.org/user/rahulnikam/practicee