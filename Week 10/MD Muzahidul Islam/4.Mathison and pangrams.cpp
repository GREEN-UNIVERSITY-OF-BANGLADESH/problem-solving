#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int sum = 0;
        vector <long long int> val(26);
        string in;
        vector<char> v;
        for(int i = 0; i< 26; i++){
            cin>>val[i];
        }
         cin>>in;
         for(int i = 0; i<in.size(); i++){
            v.push_back(in[i]);
         }
         sort(v.begin(), v.end());
         v.resize(unique(v.begin(), v.end())- v.begin());
         int n = 0, index = 0;
         for(char i = 'a'; i<='z'; i++){
            if(v[n] != i){
                sum += val[index];
                n--;
            }
             index++;
            n++;
         }
        cout<<sum<<endl;
    }
}
