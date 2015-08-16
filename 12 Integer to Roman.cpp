class Solution {
public:
    string intToRoman(int num) {
        // IMPORTANT: Please reset any member data you declared, as
        string s;
        char n[7]={'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        int count, i, j, k;
        if(num<1||num>3999)
            return s;
        for(j=1000, k=0;j>=1;j/=10)
        {
            count=num/j;
            if(!k)
            {
                for(i=0;i<count;i++)
                    s+='M';
                k++;
            }
            else
            {
                if(count<4)
                    for(i=0;i<count;i++)
                        s+=n[k+1];
                else if(count==4)
                {
                    s+=n[k+1];
                    s+=n[k];
                }
                else if(count<9)
                {
                    s+=n[k];
                    for(i=0;i<(count-5);i++)
                        s+=n[k+1];
                }
                else
                {
                    s+=n[k+1];
                    s+=n[k-1];
                }
                k+=2;
            }
            num%=j;
        }
        return s;        
    }
};
