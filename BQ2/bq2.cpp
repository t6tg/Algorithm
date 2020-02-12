#include<vector>
#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int x,n,m;
    cin >> n;
    cin >> m;
    vector<int> vec;
    int sum1 = 0 , sum2  = 0;
    sort(vec.begin(),vec.end());
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        vec.push_back(x);
    }
    if(m > n-m){
        for(int i = n  ; i >= 0  ;i--){
            if(i < n-m){
                sum1 += vec[i];
            }else{
                sum2 += vec[i];
            }
        }
    }else{
        for(int i = 0  ; i  < n ;i++){
            if(i < m){
                sum1 += vec[i];
            }else{
                sum2 += vec[i];
            }
        }
    }
    cout << abs(sum1 - sum2) << endl;
}