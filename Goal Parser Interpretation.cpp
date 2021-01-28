/*class Solution {
public:
    string interpret(string command) {
        string s="", change="o";
        for(int i=0; i<command.size(); i++)
        {
            if(command[i]=='(' && command[i+1]==')')
                s+= change;
            if(command[i]=='(' || command[i]==')')
                s+="";
            else
                s += command[i];
        }
        return s;
        
    }
};*/

class Solution {
public:
    string interpret(string command) {
        string s="";
       for(int i=0; i<command.size();)
       {
           if(command[i]=='G')
               s+="G", i+=1;
           else if(command[i]=='(' && command[i+1]==')') s+="o", i+=2;
           else s+= "al", i+=4;
               
       }
        return s;
    }
};
