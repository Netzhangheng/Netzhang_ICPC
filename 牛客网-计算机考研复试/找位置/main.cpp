//�������飬����δ���ֵ��ַ��ҳ����е�λ��

#include <bits/stdc++.h>
using namespace std;


typedef struct{
    char ch;
    vector<int> pos;
    int n;
}zifu;

//������
void showRes(vector<zifu> & out){
    int i,j;
    for(i=0;i<out.size();i++){
        if(out[i].n>1){
            for(j=0;j<out[i].pos.size()-1;j++)
                cout<<out[i].ch<<":"<<out[i].pos[j]<<",";
            cout<<out[i].ch<<":"<<out[i].pos[j]<<endl;
        }
        out[i].pos.clear();
    }
    out.clear();
}

int main(){
    char str[101];
    vector<zifu> out;
    while(cin.getline(str,101)){
        bool flag[101] = {false};
        int sl = strlen(str);
        for(int i=0;i<sl;i++){
            char tmp = str[i];
            //�ж��ַ��Ƿ��Ѿ���ѯ
            if(flag[i]==false){     //���µ��ַ�
                zifu newZifu;
                newZifu.ch = tmp;
                newZifu.n = 1;
                newZifu.pos.push_back(i);
                //�����ظ��ַ�
                for(int j=i+1;j<sl;j++){
                    if(flag[j]==false){
                        if(str[j] == tmp){
                            newZifu.n++;
                            newZifu.pos.push_back(j);
                            flag[j] = true;
                        }
                    }
                }
                //��ӽ�ȥ
                out.push_back(newZifu);
            }
        }
        //������
        showRes(out);
    }
    return 0;
}
