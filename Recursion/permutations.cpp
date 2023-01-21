#include <iostream>
#include <vector>
using namespace std;

void permute(vector<string> &res, string str, int index){
    if(index == str.length()){
        res.push_back(str);
        return;
    }
    
    for(int i = index; i < str.length(); i++){
        swap(str[index], str[i]);
        permute(res, str, index + 1);
        swap(str[index], str[i]);
    }
}

int main()
{
    string str = "abc";
    vector<string> res;
    int index = 0;
    permute(res, str, index);
    
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].length(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
