    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    /*
    Given an string array. You have to make an substring using the characters used in the whole string array such that every string  of the string array must be found in the substring and the lenght of the substring must be minimized as low as possible.
    
    string array : abc, abd, abe;
    input: abcde;
    
    */
    set<char>st;
    void uniqueElement(string p){
        for(int i = 0; i < p.size();i++){
            st.insert(p[j]);
        }
    }

    int main(){
        int n;
        cin>>n;
        string s[n];
      
        for(int i = 0; i < n; i++){
            cin>>s[i];
            string p;
            p = s[i];
            uniqueElement(p);
        }

        for(auto i = st.begin(); i != st.end(); i++) cout<<*i;
        cout<<endl;
        return 0;
    }
