#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> dict = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                
   int sum = dict[s.back()];
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (dict[s[i]] < dict[s[i + 1]])
       {
           sum -= dict[s[i]];
       }
       else
       {
           sum += dict[s[i]];
       }
   }
   
   return sum;
    }
};