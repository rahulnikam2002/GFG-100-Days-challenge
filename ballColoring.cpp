// Given n balls . All of them are initially  uncolored . You have to color the balls with two colors RED and BLUE such that there can be atmost 2 positions where a RED ball is touching BLUE ball or vice versa. You have to color all the balls.Find the number of ways in which balls can be colored.

// Example 1:

// Input: n = 1
// Output: 2
// Explanation: Possible ways to color are {{R},{B}}. 
// So the answer is 2 .

// Example 2:

// Input: n = 2
// Output: 4
// Explanation: Possible ways to color are 
// {{RB},{BR},{RR},{BB}}.So the answer is 4.

// Code =>
class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
        return n*(n-1)+2;
    }
};
