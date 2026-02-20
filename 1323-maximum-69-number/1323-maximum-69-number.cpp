class Solution {
public:
    int maximum69Number (int num) {
        int lt = log10(num);
        int temp = num;
        while(temp > 0){
            int du = temp / (int)pow(10,lt);
            if(du == 6){
                num+= 3*pow(10,lt);
                break;
            }
            temp = temp % (int)pow(10,lt);
            lt--;
        }
        return num;
    }
};