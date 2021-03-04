class Solution {
public:
    int maximum69Number (int num) {
        string s_num = to_string(num);
        for (auto &c : s_num) {
            if (c == '6') {
                c = '9';
                break;
            }
        }
        return stoi(s_num);
    }
};
// stoi() : The stoi() function takes a string as an argument and returns its value.
// string str1 = to_string(12.10); ------> means change int to string
