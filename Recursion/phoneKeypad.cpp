#include <iostream>
#include <vector>
using namespace std;

// Time complexity --> O()
// Auxilary space --> O()

void keypad(vector<string> &res, string sub, string digits, string mapping[], int index){
    if(index >= digits.length()){
        res.push_back(sub);
        return;
    }
    
    int number = digits[index] - '0';
    string map = mapping[number];
    
    for(int i = 0; i < map.length(); i++){
        sub.push_back(map[i]);
        keypad(res, sub, digits, mapping, index + 1);
        sub.pop_back();
    }
}

int main()
{
    // Phone keypad problem
    string digits = "23";
    vector<string> res;
    string sub;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    keypad(res, sub, digits, mapping, 0);
    
    for(auto elem: res){
        cout << elem << endl;
    }
    return 0;
}
