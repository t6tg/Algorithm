#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    string l;
    cin >> n;
    string arr[n];
    string word;
    for(int i = 0 ; i  < n ; i++ ){
        cin >> l;
        arr[i] = l;
    }
    for(int i = 0 ; i  < n ; i++ ){
        for(int j = 0 ; j  <  arr[i].size() ; j++){
            if(arr[i][j] == arr[i+1][j]){
                word += arr[i];
            }else{
                return 0;
            }
        }
    }
    cout << word << endl;
}
