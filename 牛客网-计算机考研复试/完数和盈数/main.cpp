#include <bits/stdc++.h>
using namespace std;
/**
1. ����:һ�������ǡ�õ������ĸ�����(�����������)�Ӻ�
2. ӯ��:����֮�ʹ��ڸ���
**/

int main(){
    queue<int> wan;
    queue<int> yin;
    int tmp;
    for(int i=2;i<=60;i++){
        tmp = 0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                tmp+=j;
                if(tmp>i)
                    break;
            }
        }
        if(tmp>i) yin.push(i);
        if(tmp==i) wan.push(i);
    }
    cout<<"E:";
    while(!wan.empty()){
        cout<<" "<<wan.front();
        wan.pop();
    }
    cout<<endl;

    cout<<"G:";
    while(!yin.empty()){
        cout<<" "<<yin.front();
        yin.pop();
    }
    cout<<endl;

    return 0;
}
