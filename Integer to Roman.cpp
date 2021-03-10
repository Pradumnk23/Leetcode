class Solution {
public:
    
    const int value[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    string intToRoman(int num) {
        string ans = "";
        for(int i=0; num; i++)
        {
            while(num>=value[i])
            {
                ans+=rom[i];
                num-=value[i];
            }
        }
        return ans;
    }
};
/*
class Solution {
public:
    string intToRoman(int num) {
        vector<string> roman = {"M", "D", "C", "L", "X", "V", "I"};
        vector<int> integers = {1000, 500, 100, 50, 10, 5, 1};
        vector<int> carry = {100, 100, 10, 10, 1, 1, 0};
        
        string res = "";
        int next;
        
        for (int i = 0; num; i++) {
            
            int temp = num / integers[i];
            while (temp--) res += roman[i];
            num %= integers[i];
            
            if (i == 6) return res;
            
            next = carry[i];
            if ((num - num % next) == (integers[i] - next)) {
                res += i % 2 ? roman[i+1] + roman[i] : roman[i+2] + roman[i];
                num -= integers[i] - next;
            }
            
        }
        return res;
    }
};
*/
