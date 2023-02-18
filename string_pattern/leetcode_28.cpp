class Solution {
public:
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
    
    /*
    strins s = "abcabcabc";
    string p = "abc";	
    int found = s.find(p); 
    while(found != string::npos){
        cout<<"pattern founded in index : "<<found+1<<endl;
        found = p.find(t, found + 1);
    }
    This is the function to find the pattern the the string . It returns the intex of pattern traversing from first to last in the strng.
    */
    
    int strStr(string s, string t) {
     int  sln = s.size();
     int  tln = t.size();
     int p = 31;
    const int m = 1e10 + 7;
    vector<long long int>vec(max(sln, tln));
    vec[0] = 1;
    for(int i = 1; i < vec.size(); i++){
        vec[i] = (vec[i-1] * p) % m;
    }
    vector<long long int>svec(sln + 1, 0);
    for(int i = 0; i < sln; i++){
        svec[i+1] = (svec[i] + (s[i] - 'a' + 1) * vec[i]) % m;
    }
    long long int cnt = 0;
    for(int i = 0; i < tln; i++){
        cnt = (cnt + (t[i] - 'a' + 1) * vec[i]) % m;
    }
    
    for(int i = 0; i <= sln - tln; i++){
        long long int cut = (svec[i+tln] - svec[i] + m) % m;
        if(cut == cnt * vec[i] % m)
        return i;
    }  
     return -1;   
    } 
};
