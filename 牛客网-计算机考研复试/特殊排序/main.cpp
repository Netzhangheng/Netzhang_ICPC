#include <bits/stdc++.h>
using namespace std;

/**
        һ������
1. ����ڶ���û��Ԫ�����-1
2. ���ÿ����ظ�Ԫ�ز����
3. �����������ظ������������ֻ��Ҫ�����ֵ�޳�һ������
**/

int main(){
    int n,i;
    int all[1001];
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>all[i];
        sort(all,all+n);

        cout<<all[n-1]<<endl;     //���Ԫ��
        if(n-1>0){
            cout<<all[0];
            for(i=1;i<n-1;i++)
                cout<<" "<<all[i];
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
