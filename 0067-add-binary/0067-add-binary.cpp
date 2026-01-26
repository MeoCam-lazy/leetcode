class Solution {
public:
    string addBinary(string a, string b) {
        while(a.size() != b.size()){
            a.size() > b.size() ? b.insert(0,1,'0') : a.insert(0,1,'0');
        }
        int carry = 0;
        string c = "";
        for(int i = a.size()-1; i >= 0; i--){
            if(a[i] == '1' && b[i] == '1'){
                if(carry == 0){
                    c.insert(0,1,'0');
                }
                else{
                    c.insert(0,1,'1');
                }
                carry = 1;
            }
            else if((a[i] - '0') + (b[i] - '0') == 1){
                if(carry == 0){
                    c.insert(0,1,'1');
                    carry = 0;
                }
                else{
                    c.insert(0,1,'0');
                    carry = 1;
                }
            }
            else{
                carry == 0? c.insert(0,1,'0') : c.insert(0,1,'1');
                carry = 0;
            }
        }
        if(carry) c.insert(0,1,'1');
        return c;
    }
};