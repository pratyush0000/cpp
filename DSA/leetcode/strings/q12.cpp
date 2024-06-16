class Solution {
public:
    std::string intToRoman(int num) {
        std::string roman;
        roman.reserve(15);
        static const std::string letters[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        static const int numbers[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        for(int posi=0; num>0; posi++){
            while(num>=numbers[posi]){
                roman+=letters[posi];
                num-=numbers[posi];
            }
        }

        return roman;
    }
};