#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        bool isPalindrome = true;
        string str = "";
        int st = 0;
        int end, n;
        for(char c: s) {
            if(isalnum(c)) {
                str += tolower(c);
            }
        }
        n = str.length();
        end = n-1;
        while(st<end) {
            if(str[st]!=str[end]) {
                return false;
                break;
            }
            else {
                st++;
                end--;
            }
        }

        return isPalindrome;
    }
};