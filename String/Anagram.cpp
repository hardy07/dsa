#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false; // Early return if lengths are not the same

    int alphabet[26] = {0};  // Initialize an array of size 26 to store character counts
    
    // Increment count for characters in string 's'
    for (int i = 0; i < s.length(); i++) 
        alphabet[s[i] - 'a']++;
    
    // Decrement count for characters in string 't'
    for (int i = 0; i < t.length(); i++) 
        alphabet[t[i] - 'a']--;
    
    // If any count is not zero, it's not an anagram
    for (int i = 0; i < 26; i++) 
        if (alphabet[i] != 0) 
            return false;
    
    return true;  // If all counts are zero, it's an anagram
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "Anagram" << endl;
    } else {
        cout << "Not an Anagram" << endl;
    }

    return 0;
}
