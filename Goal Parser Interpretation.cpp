class Solution {
public:
    string interpret(string command) {
        string s="", change="o";
        for(int i=0; i<command.size(); i++)
        {
            if(command[i]=='(' && command[i+1]==')')
                s+= change;
            if(command[i]=='(' ||command[i]==')')
                s+="";
            else
                s += command[i];
        }
        return s;
        
    }
};
