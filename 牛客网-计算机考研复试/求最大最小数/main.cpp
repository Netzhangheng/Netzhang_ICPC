#include <bits/stdc++.h>
using namespace std;

//ˮ�⣬д���ܶࡣ
int main(){
    int n,tmp;
    int Max,Min;
    while(cin>>n){
        cin>>Max;
        Min = Max;
        for(int i=1;i<n;i++){
            cin>>tmp;
            Max = max(Max,tmp);
            Min = min(Min,tmp);
        }
        cout<< Max << " "<<Min<<endl;
    }
    return 0;
}
