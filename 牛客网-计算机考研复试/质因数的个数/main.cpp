#include <bits/stdc++.h>
using namespace std;

//ע���2��ʼ����������г˷���һ���������Լ����ȻС��n��ƽ��
//�����n���ɴ���1��˵����һ����������1����
int main(){
    long n;
    int s;
    while(cin>>n){
        s = 0;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                s++;
                n/=i;
            }
        }
        if(n>1) s++;
        cout<<s<<endl;
    }
    return 0;
}
