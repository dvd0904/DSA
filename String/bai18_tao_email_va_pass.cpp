#include<bits/stdc++.h>
using namespace std;
void lower(string &s){
    for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string Name_DOB; getline(cin, Name_DOB);
        int index = 0;
        for(int i = 0; i < Name_DOB.size(); i++){
            if(isdigit(Name_DOB[i])){
                index = i; break;
            }
        }
        string DOB = Name_DOB.substr(index, 10); // nam sinh
        string Name = Name_DOB.substr(0, Name_DOB.size() - 11);
        stringstream ss(Name);
        string word;
        vector < string > V;
        while(ss >> word){
            lower(word);
            V.push_back(word);
        }
        string email = "";
        email += V[V.size() - 1];
        for(int i = 0; i < V.size() - 1; i++) email += V[i][0];
        email += "@xyz.edu.vn";
        string pass = "";
        pass += to_string(stoi(DOB.substr(0, 2))) + to_string(stoi(DOB.substr(3, 2))) + to_string(stoi(DOB.substr(6, 4)));
        cout << email << endl << pass << endl;

    }
}