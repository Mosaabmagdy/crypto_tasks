#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

string decrypt(const string &ciphertext, unordered_map<char, char> &key_map) {
    string decrypted;
    for (char ch : ciphertext) {
        decrypted += key_map.count(ch) ? key_map[ch] : ch;
    }
    return decrypted;
}

void brute_force(const string &ciphertext) {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<string> permutations;

    do {
        permutations.push_back(alphabet);
    } while (next_permutation(alphabet.begin(), alphabet.end()));

    for (const auto &perm : permutations) {
        unordered_map<char, char> key_map;
        for (size_t i = 0; i < alphabet.size(); ++i) {
            key_map[alphabet[i]] = perm[i];
        }
        string decrypted_text = decrypt(ciphertext, key_map);
        cout << "Key:" << perm << "Decrypted Text: " << decrypted_text << endl;
    }
}

int main() {
    string encrypted_message;
    cout << "Enter the encrypted message: ";
    cin >> encrypted_message;

    for (char&c:encrypted_message)c=toupper(c);

    brute_force(encrypted_message);
    return 0;
}

