#include <bits/stdc++.h>
using namespace std;
//����pi
const double pi = acos(-1);

int main(){
    double x0,y0,z0,x1,y1,z1;
    double r,v;
    while(cin>>x0>>y0>>z0>>x1>>y1>>z1){
        //�뾶��ʽ�������ʽ
        r = sqrt(pow((x1-x0),2)+pow((y1-y0),2)+pow((z1-z0),2));
        v = (4.0/3.0)*pow(r,3)*pi;
        printf("%.3lf %.3lf\n",r,v);    //�����ʽ
    }
    return 0;
}
