class Solution {
   public:
    string encode(vector<string>& strs) {
        string numbers;
        string words;
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            numbers += to_string(word.size()) + "-";
            words += word;
        }
        numbers += "--";
        return numbers + words;
    }

    vector<string> decode(string s) {
        vector<string> final;
        vector<int> sizes;

        int split = s.find("---");
        string numbers = s.substr(0, split+1);
        string words = s.substr(split+3, s.size() - split-3);

        string current;
        int count = 0;
        int size;
        for (char c : numbers){
            if (c == '-'){
                size = stoi(current);
                final.push_back(words.substr(count, size));
                count += size;
                current = "";
            } else {
                current += c;
            }
        }
        return final;
    }
};
