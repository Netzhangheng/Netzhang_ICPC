#include <bits/stdc++.h>
using namespace std;

void splitString(string a){
    int i=0,tmp=0;
    //ȡ����ͷ�ո�����
    while(a[i]==' ')
        i++;

    for(;i<a.size();){
        while(a[i]!=' ' && a[i]!='.')
            i++,tmp++;
        while(i<a.size() && (a[i]==' ' || a[i]=='.'))
            i++;
        cout<<tmp;
        //�����Ǹ��ӵ㣬���һ�������û�пո��
        if(i!=a.size())
            cout<<" ";
        tmp=0;
    }
}

int main(){
    string str;
    while(getline(cin,str)){
        splitString(str);
        cout<<endl;
    }
    return 0;
}
