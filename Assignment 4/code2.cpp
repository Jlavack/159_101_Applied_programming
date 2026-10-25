#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getSpaces(int n){
    string s = "";
    for(int i=0; i<n;i++) s += " ";
    return s;
}

string getLine(vector<string>& words, int start, int end, int letterCount, int maxWidth){
    string res = words[start];
    int spaces = maxWidth - letterCount;
    if(start == end){ // don't forget this corner case
        res += getSpaces(spaces);
        return res;
    }
    int numOfSpace = spaces/(end-start);
    int extraOne = spaces%(end-start);
    string space0 = getSpaces(numOfSpace);
    string space1 = space0 + " ";
    for(int i= 0; i< end-start; i++){
        res  = res + (i < extraOne? space1: space0) + words[start + 1 + i];
    }
    return res;
}

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    int N = words.size();
    int i = 0, j = 0; // for word counting
    int counter = 0;  // letter counting
    vector<string> res;
    while(i<N && j<N){
        int len = words[j].length();
        counter += len;
        if(counter + j - i > maxWidth){
            counter -= len;
            res.push_back(getLine(words, i, j-1, counter, maxWidth));
            i = j;
            counter = 0;
        }else{
            j++;
        }
    }
    // check the last session
    if(counter){
        string last = words[i];
        for(int x=i+1; x < j; x++) last = last + " " + words[x];
        last = last + getSpaces(maxWidth - last.size());
        res.push_back(last);
    }

    return res;
}

int main(){
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    vector<string> lines = fullJustify(words, 16);
    string s = "";
    for(int i=0; i<16; i++) s += char(i%10+'0');
    cout << "=>" << s << "<=" << endl;
    for(auto x: lines)
        cout << "=>" << x << "<=" << endl;

    return 0;
}
