#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
string encrypted_text;
    cin>>encrypted_text;
    string Common_letters="etaoinshrdlcumwfgypbvkxjqz";
    string decrypted_text ="";
    sort(encrypted_text.begin(),encrypted_text.end());
    int count=0;
    for(int i=0;i<encrypted_text.length();i++) {
        if(encrypted_text[i]==encrypted_text[i+1]) {
            count++;
            decrypted_text+=Common_letters[i];
        }
        else
            count=0;
    }
cout<<decrypted_text;
    return 0;
}
