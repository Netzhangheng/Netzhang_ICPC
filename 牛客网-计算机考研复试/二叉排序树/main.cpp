//�ظ�Ԫ�ز��ò���
//�򵥵Ŀ��ǲ��뼴�ɣ��Ƚϵ�ǰ���data�Ͳ�����data�������ݹ黹��ֱ����Ӻ���
//�Ż�����avl��
#include <bits/stdc++.h>

using namespace std;
typedef struct tree{
    int data;
    tree *pLChild;
    tree *pRChild;
}Bitree;

//�½����
Bitree* creatNew(int data){
    Bitree *tmp = new Bitree();
    tmp->data = data;
    tmp->pLChild = NULL;
    tmp->pRChild = NULL;
    return tmp;
}

void addChild(Bitree *bitree,const int data){
    if(bitree->data == data)
        return;
    if(bitree->data > data){
        if(!bitree->pLChild)
            bitree->pLChild = creatNew(data);
        else
            addChild(bitree->pLChild,data);
    }else{
        if(!bitree->pRChild)
            bitree->pRChild = creatNew(data);
        else
            addChild(bitree->pRChild,data);
    }
}

void preOrder(Bitree *tree){
    cout<<tree->data<<" ";
    if(tree->pLChild) preOrder(tree->pLChild);
    if(tree->pRChild) preOrder(tree->pRChild);
}

void inOrder(Bitree *tree){
    if(tree->pLChild) inOrder(tree->pLChild);
    cout<<tree->data<<" ";
    if(tree->pRChild) inOrder(tree->pRChild);
}

void posOrder(Bitree *tree){
    if(tree->pLChild) posOrder(tree->pLChild);
    if(tree->pRChild) posOrder(tree->pRChild);
    cout<<tree->data<<" ";
}

void clearTree(Bitree *tree){
    if(tree->pLChild)   clearTree(tree->pLChild);
    if(tree->pRChild)   clearTree(tree->pRChild);
    delete tree;
    tree = NULL;
}

int main(){
    int n;
    int data;
    while(cin>>n){
        cin>>data;
        Bitree *p = creatNew(data);
        for(int i=1;i<n;i++){
            cin>>data;
            addChild(p,data);
        }
        preOrder(p);
        cout<<endl;
        inOrder(p);
        cout<<endl;
        posOrder(p);
        cout<<endl;
        clearTree(p);
    }
    return 0;
}
