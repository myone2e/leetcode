#include <algorithm>
#include <vector>
using namespace std;
// g: greed of child, s: cookie size vector
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        if (g == s) return g.size();
        int cnt = 0, i = 0, j = 0; // ans, g, s
        while (i<g.size() && j<s.size()){
            if (g[i]<=s[j]){
                ++cnt;
                ++i;
                ++j;
            }else ++j; // if not satisfied, try next cookie
        }
        return cnt;
    }
};