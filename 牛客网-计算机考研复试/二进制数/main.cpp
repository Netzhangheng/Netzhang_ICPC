#include <bits/stdc++.h>
using namespace std;

//��itoa()����ʹ�ã�����ƽ̨����֧��
int main(){
    unsigned int n;
    int res[50];
    int i;
    while(cin>>n){
        i=0;
        do{
            res[i++]=n%2;
            n/=2;
        }while(n!=0);
        for(i=i-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
