class Solution {
public:
    string defangIPaddr(string address) {
        string s="", change="[.]";
        for(int i=0; i<address.size(); i++)
        {
            if(address[i]=='.')
                s+= change;
            else
                s += address[i];
        }
        return s;
    }
    
};
