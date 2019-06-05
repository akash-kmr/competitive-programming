struct kmp{
    string pattern;
    int m;
    vector<int > pi; //Note that pi[i] here represents the length of longest proper suffix which is also a prefix of index i-1.
    kmp(string Pattern) : pattern(Pattern){ //Constructer
        m = pattern.size();
        pi.resize(m+1);
        pi[0] = -1;
        int j = -1;
        for(int i = 0; i<m; i++){
            while(j>=0 && pattern[i]!=pattern[j]) j = pi[j];
            pi[i+1] = ++j;
        }
    }
    int kmpSearch(string text){ //returns the index of first occurrence of the pattern in the text
        int n = text.size();
        int j = 0;
        for(int i = 0; i<n; i++){
            while(j>=0&&text[i]!=pattern[j]) j = pi[j];
            j++;
            if(j==m) return i-j+1;
        }
        return -1;
    }
    vector<int> kmpSearchAll(string text){ //returns a vector of indexes of all occurrence of pattern in the text
        vector<int> ret;
        int n = text.size();
        int j = 0;
        for(int i = 0; i<n; i++){
            while(j>=0&&text[i]!=pattern[j]) j = pi[j];
            j++;
            if(j==m) {
                ret.push_back(i-j+1);
                j = pi[j];
            }
        }
        return ret;
    }
};
