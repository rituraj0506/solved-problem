class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string romn[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        while(num>0)
        {
            for(int i=0;i<13;i++)
            {
                if(num>=arr[i]){
                    num-=arr[i];
                ans+=romn[i];
                    break;
                    }
            }
        }
        return ans;
        
    }
};