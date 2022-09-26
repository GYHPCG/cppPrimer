#include <iostream>
#include <vector>
using namespace std;

 bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        sort(arr.begin(),arr.end());
        sort(pieces.begin(),pieces.end());
        vector<int>com;
        for (int i = 0; i < pieces.size(); ++i) {
            for (int j = 0; j < pieces[i].size(); ++j) {
                com.push_back(pieces[i][j]);
            }
        } 
        for (int k : com) {
            cout << k << " ";
        }
        if (arr.size() != com.size()) return false;
        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] != com[i]) return false;
        }    
        return true;
    }
int main()
{
    vector<int>arr = {49,18,16};
    vector<vector<int>>p = {{16,18,49}};
    canFormArray(arr,p);
    return 0;

}
