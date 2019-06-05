//Problem Statement : https://www.spoj.com/problems/NUMOFPAL/
//Count the total number of palindromic substrings of a given string
//Examples "aaaa" -> 10, "malayalam" ->15
#include <bits/stdc++.h>
#define Endl cout<<"\n";
using namespace std;


struct PalindromicTree{
    struct Node{
        int len;
        int depth;
        int suff; //suffix link
        map<char, int> next;
        Node() : len(0), depth(0), suff(0){}
    };
    string s;
    int ans;
    int len;
    int curr, sz;
    vector<Node> node;
    PalindromicTree(string ss) : s(ss), len(ss.size()){
        ans = 0;
        node.assign(len+10, Node());
        node[0].len = -1;
        curr = 1;
        sz = 2;
        for(int i=0; i<len; i++){
            char ch = s[i];
            while(1){
                if(curr==0) break;
                if(i-node[curr].len-1>=0&&s[i-node[curr].len-1]==ch) break;
                curr = node[curr].suff;
            }
            if(node[curr].next.find(ch)!=node[curr].next.end()) curr = node[curr].next[ch];
            else{
                int tmp = node[curr].suff;
                node[curr].next[ch] = sz;
                node[sz].len = node[curr].len + 2;
                node[sz].depth = node[curr].depth + 1;
                curr = sz;
                if(node[sz].len==1) node[sz].suff = 1;
                else{
                    while(1){
                        if(tmp==0) break;
                        if(node[tmp].next.find(ch)!=node[curr].next.end()){
                            if(i - node[tmp].len - 1>=0&&s[i - node[tmp].len - 1]==ch) break;
                        }
                        tmp = node[tmp].suff;
                    }
                    tmp = node[tmp].next[ch];
                    node[sz].suff = tmp;
                }
                sz++;
            }
            node[curr].depth = 1 + node[node[curr].suff].depth;
            ans += node[curr].depth;
        }
    }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ACER\\Desktop\\Codes\\input.txt", "r", stdin);
    #endif
    string s;
    cin>>s;
    PalindromicTree p(s);
    cout<<p.ans;
}
