#include <bits/stdc++.h>
using namespace std;
//����������(a+b*10)*10���ֽṹ��ע���ַ�ת�����Լ����������ַ�'-'��','
int main(){
    string a,b;
    int r,l;
    int isMinus;
    int length;
    while(cin>>a>>b){
        r=0,l=0,isMinus = 0;
        length = a.size();
        if(a[0] == '-')
            isMinus = 1;
        for(int i=isMinus;i<length-1;i++)
            if(a[i]!=',')
                r=(r+(a[i]-'0'))*10;

        r+=(a[length-1]-'0');
        if(isMinus) r*=-1;

        isMinus = 0;
        length = b.size();
        if(b[0] == '-')
            isMinus = 1;
        for(int i=isMinus;i<length-1;i++)
            if(b[i]!=',')
                l=(l+(b[i]-'0'))*10;
        l+=(b[length-1]-'0');
        if(isMinus) l*=-1;

        cout<<r+l<<endl;
    }
    return 0;
}
