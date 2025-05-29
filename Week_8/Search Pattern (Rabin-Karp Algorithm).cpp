class Solution {
  public:
     vector <int> search(string pattern, string text) {
    
        std::vector<int> richa;
        if (pattern.size() > text.size()) {
            return richa;
        }
    
        std::string harsh = "";
    
        for (size_t i = 0; i < pattern.size(); i++) {
            harsh += text[i];
        }
        
        if (harsh == pattern) {
            richa.push_back(1);
        }
        
        for (size_t i = pattern.size(); i < text.size(); i++) {
            harsh.erase(0, 1);
            harsh += text[i];
            
            if (harsh == pattern) {
                richa.push_back(i-pattern.size()+2); 
            }
        }

    return richa;
    }
};