class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int a=0;
        int o=n;
        
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]=="UP" )
            {
                a=a-o;
            }
            else if(commands[i]=="DOWN")
            {
                a=a+o;
            }
            else if(commands[i]=="RIGHT" )
            {   
                if(a % n != n - 1)
                   {
                     a++;
                   }
            }
            else if(commands[i]=="LEFT"){
                if(a % n != 0)
                    {
                        a--;
                    }
            }
            
        }
        return a;
    }
};