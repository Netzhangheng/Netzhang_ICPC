#include <bits/stdc++.h>
using namespace std;
//���ַ���ת�������֣�������Ŀ����ת������ȡ��ʽ
int main(){
    string a,b;
    int l,r;
    while(cin>>a>>b){
        l = 0,r = 0;
        for(int i=0;i<a.size();i++)
            l+=a[i]-'0';
        for(int i=0;i<b.size();i++)
            r+=b[i]-'0';
        cout<<l*r<<endl;
    }
    return 0;
}
