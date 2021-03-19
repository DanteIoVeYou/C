罗马数字包含以下七种字符： I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个整数，将其转为罗马数字。输入确保在 1 到 3999 的范围内。

char * intToRoman(int num)
{
        char* tmp = (char*)malloc(sizeof(char)*16);
        char* ret = tmp;
        int i=0;
        for(i=0;i<num/1000;i++)
        {
            *tmp='M';
            tmp++;
        }
        num%=1000;

        if(num/900==1)
        {
            *tmp='C';
            *(tmp+1)='M';
            tmp+=2;
            num%=900;
        }

        if(num/500==1)
        {
            *tmp='D';
            tmp++;
            num%=500;
        }
        if(num/400==1)
        {
            *tmp='C';
            *(tmp+1)='D';
            tmp+=2;
            num%=400;
        }

        for(i=0;i<num/100;i++)
        {
            *tmp='C';
            tmp++;
        }
        num%=100;
        if(num/90==1)
        {
            *tmp='X';
            *(tmp+1)='C';
            tmp+=2;
            num%=90;
        }
        if(num/50==1)
        {
            *tmp='L';
            tmp++;
            num%=50;
        }
        if(num/40==1)
        {
            *tmp='X';
            *(tmp+1)='L';
            tmp+=2;
            num%=40;
        }
        for(i=0;i<num/10;i++)
        {
            *tmp='X';
            tmp++;
        }
        num%=10;
        if(num/9==1)
        {
            *tmp='I';
            *(tmp+1)='X';
            tmp+=2;
            num%=9;
        }
        if(num/5==1)
        {
            *tmp='V';
            tmp++;
            num%=5;
        }
        if(num/4==1)
        {
            *tmp='I';
            *(tmp+1)='V';
            tmp+=2;
            num%=4;
        }
        for(i=0;i<num;i++)
        {
            *tmp='I';
            tmp++;
        }
        *tmp='\0';
        return ret;
}