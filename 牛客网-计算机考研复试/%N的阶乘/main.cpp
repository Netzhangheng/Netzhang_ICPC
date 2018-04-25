/**
1. �ر�������ˣ�һ��Ҫѧ��𿪷ֲ����
2. xxx5 xxx4 xxx3 xxx2 xxx1 * i;
3. �۲�˷������ԣ�xxx1��i���/10000����Ҫ��λ��ֵ����%10000���ǵ�ǰ��λ��ֵ
4. xxx2*+��λ��ֵ,����ͬ2.
5. ���ʱ������ǰ����λ,����ÿ��������涼Ҫ���4��0
**/


#include <bits/stdc++.h>
using namespace std;

int res[10000];
void factorial(const int n){
    int i,j,carry,bit;
    bit=carry=0;
    res[0] = 1;

    for(i=1;i<=n;++i,carry=0){
        for(j=0;j<=bit;++j){
            res[j] = res[j]*i+carry;
            carry = res[j]/10000;
            res[j]%=10000;
        }
        if(carry) res[++bit] = carry;
    }

    cout<<res[bit];
    for(i=bit-1;i>=0;i--)
        printf("%.4d",res[i]);
    cout<<endl;
}

int main(){
    int n;
    while(cin>>n){
        factorial(n);
    }
    return 0;
}
