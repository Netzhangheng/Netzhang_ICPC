#include <bits/stdc++.h>
using namespace std;
int main(){
    bool a[1001];
    memset(a,true,sizeof(a));
    int b[1001];
    for(int i=11;i<10001;i=i+10){       //�����1��β������������/10�Ž�����
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                a[i/10]=false;
                break;
            }
        }
    }

    int n,s;
    while(cin>>n){
        if(n%10<2){     //92-101ֱ�Ӷ���9���ڵĲ���
            n=n-8;
        }

        s=0;
        for(int i=1;i<=n/10;i++)    //��������������������Щ
            if(a[i])
                b[s++]=i;

        if(s==0){
            cout<<"-1"<<endl;
        }else{                      //���Ҫ*10+1
            for(int i=0;i<s-1;i++)
                cout<<b[i]*10+1<<" ";
            cout<<b[s-1]*10+1<<endl;
        }
    }
    return 0;
}
