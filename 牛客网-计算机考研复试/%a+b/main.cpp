//����˼·
//112300 �� 123 ������תΪ003211 ��321
//�پ����ַ����ȳ�תΪ 003211 �� 321000
//������Ӻͽ�λ���������324211���ڷ���������ɣ�����

#include <bits/stdc++.h>
using namespace std;
char a[1001],b[1001];
int res[1001];

//���ַ�����ת���������ļ���
void Reverse(char *s,int n){
    for(int i=0,j=n-1; i<j ; i++,j--){
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
//ʹ�������ַ����ȳ����������
int sameLength(){
    int al=strlen(a);
    int bl=strlen(b);
    Reverse(a,al);
    Reverse(b,bl);
    if(al>bl){
        for(int i=bl;i<al;i++)
            b[i]='0';
        return al;
    }else{
        for(int i=al;i<bl;i++)
            a[i]='0';
        return bl;
    }
}

int main(){
    int j,l;
    while(cin>>a>>b){
        j=0;
        l = sameLength();
        for(int i=0;i<l;i++){
            //����˳����Ū����
            res[i] = ((a[i]-'0')+(b[i]-'0')+j)%10;
            j = ((a[i]-'0')+(b[i]-'0')+j)/10;
        }
        if(j!=0)
            res[l++] = j;
        for(int i=l-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
