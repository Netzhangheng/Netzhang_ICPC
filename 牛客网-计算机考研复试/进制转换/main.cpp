#include <bits/stdc++.h>
using namespace std;

/**
1. ��λ��2�������1�����λ��10�ٳ�2. �����0���λֱ�ӳ�2
2. �����һλʱ��������������
3. �ٴγ�ʱ���ж���ʼλ�Ƿ�Ϊ0��0�������ˣ������ʱ��0λ�ڸ�λǰ�棬���������1���������
**/

int main(){
    char a[30];
    int b[30];
    int res[1000];
    int length,resL;
    int i,j,tmp;
    while(cin>>a){
        length = strlen(a);
        for(i=0;i<length;i++)       //ת������������
            b[i] = a[i]-'0';

        for(resL=j=0;j<length;){
            tmp=0;
            for(i=j;i<length-1;i++){
                b[i] += tmp*10;
                tmp = b[i]%2;
                b[i]/=2;
            }
            b[length-1] += tmp*10;
            res[resL++] = b[length-1]%2;
            b[length-1]/=2;

            while(j<length && b[j]==0)
                j++;
        }

        for(int k=resL-1;k>=0;k--)
            cout<<res[k];
        cout<<endl;
    }
    return 0;
}
