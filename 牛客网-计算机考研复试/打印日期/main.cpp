//�� yyyy-mm-dd�ĸ�ʽ�������ж�Ӧ�����ڴ�ӡ����
//ֻ�����Ƿ�Ϊ���ֻ꣬��Ҫ�������鼴�ɡ�
//���Ǹ�ʽʹ��C�����printf
#include <bits/stdc++.h>
using namespace std;

int main(){
    const int run[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    const int notRun[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month;
    int days;
    while(cin>>year){
        cin>>days;
        month = 0;
        if((year%4==0) && (year%100!=0 || year%400==0)){
            while(run[month] < days){
                days-=run[month];
                month++;
            }
            printf("%04d-%02d-%02d\n",year,(month+1),days);
        }else{
            while(notRun[month] < days){
                days-=notRun[month];
                month++;
            }
            printf("%04d-%02d-%02d\n",year,(month+1),days);
        }
    }
    return 0;
}
