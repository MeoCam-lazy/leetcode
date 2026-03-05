class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for(size_t i = 0; i < address.length(); i++){
            if(address[i] == '.') result += "[.]";
            else result += address[i];
        }
        return result;
    }
};