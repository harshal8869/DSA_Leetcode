class Solution {
public:
    int distMoney(int money, int children) {
        int x = money / 8;
        int y = money % 8;
        if(children > money)
            return -1;
        if(money < 8)
            return 0;
       
        if(x==children && y==0)
            return children;
         if(x>=children)
            return children - 1;
        
       
        if(children == x + 1 && y==4)
            return children - 2;
          if(y + x>= children)
            return x;
        
       
        int z = children - x;
        while(y<z){
            z++;
            y= y + 8;
            x--;
        }
        return x;
    }
};