class Solution {
public:
    string removeOccurrences(string s, string part) {
         string result = ""; // initially ek khali string le lenge
        int n = part.length(); // it is given inthe question i.e the part

        for(char &ch : s) {
            result.push_back(ch); // ek ek karke result  mei string k elements push karte jayenge

            if(result.length() >= n && result.substr(result.length() - n) == part) { // jab result ki length >= part ki length k ho jaye and fir check karenge ki kis index se kis index tak check karna hai
                result.erase(result.length() - n); // agar uss index se leke (part.length) tak same part mil jata hai toh utna part erase kar denge 
            }
        }

        return result; // finallly jo bach jayega usse return kar denge
    }
};