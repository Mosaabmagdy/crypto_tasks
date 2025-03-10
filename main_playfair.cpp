#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
string key;
    cin>>key;
    string table[5][5];
    string alpha="abcdefghijklmnopqrstuvwxz";
    string rest="";
    for(int i=0;i<key.length();i++) {
        if(key[i]==alpha[i+1]) {
           char c=key[i];
            alpha.erase(c);
        }
    }
    for(int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            table[i][j]=key[i];
            if(i==key.length()) {
                table[i][j]=alpha[i];
            }

        }
    }
    for(int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
cout<<table[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}
