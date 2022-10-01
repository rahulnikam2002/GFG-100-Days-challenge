// Geek has a string Sof size Nconsisting of characters from '0'to '9'. He wants to minimise the length of the string. In each minimising operation, geek can remove any two consecutive characters if they are of the form {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}.
// Find the minimum possible length of the string after applying minimising operations.

// Example 1:

// Input:
// N = 5
// S = "12213"
// Output: 1
// Explanation: Geek can get the string of
// length 1 in two minimising operation,
// In 1st operation Geek will remove "12"
// from "12213" then Geek left with "213"
// In 2nd operation Geek will remove "21"
// from "213" then Geek left with "3"

// Example 2:

// Input:
// N = 4
// S = "1350"
// Output: 4
// Explanation: Can't remove any character.

class Solution
{
public:
    int minLength(string s, int n)
    {
        set<string> setp = {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
        stack<char> st;
        for (auto it : s)
        {
            string cnew;
            if (st.empty())
                st.push(it);
            else
            {
                cnew.push_back(st.top());
                cnew.push_back(it);
                if (setp.find(cnew) != setp.end())
                {
                    n -= 2;
                    st.pop();
                }
                else
                    st.push(it);
            }
        }
        return n;
    }
};

// Profile Link - https://auth.geeksforgeeks.org/user/rahulnikam/practice
