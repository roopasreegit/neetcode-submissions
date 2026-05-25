class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto &s:strs){
            int num=s.size();
            ans+=to_string(num);
            ans+='#';
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));

            
            ans.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return ans;
    }
};
