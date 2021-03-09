/*
time:2021年3月9日 10:11:53
source：LeetCode 1047
*/


#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> s;
        for (int i = 0; i < S.length(); i++)
        {
            if (s.empty() || S[i] != s.top())
            {
                s.push(S[i]);
            }
            else
            {
                s.pop();
            }
        }
        string answer;
        while (!s.empty())
        {
            char c = s.top();

            answer.push_back(c);
            s.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
