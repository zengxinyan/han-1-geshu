#include <iostream>
using namespace std;
int nb(int n){
    int factor =1;
    int tem = 0;
    int low, cur, high;
    
    while (n / factor)
        
    {
        
        low = n % factor;//��ǰ���ֵĵ�λ
        cur = n / factor % 10;//���ֵ�ǰλ�õ���
        high = n / factor / 10;// ��ǰ���ֵ����λ
        
        if (cur==0)
            tem += high * factor;
            else if(cur==1)
                tem += high * factor + low + 1;
                else
                    tem += (high + 1) * factor;
                    factor *= 10;
                    }
    return tem;

}
int main(int argc, const char * argv[]) {
    
    int a;
    
    cout<<"n�Ǽ���"<<endl;;
    cin>>a;
    cout<<nb(a)<<endl;
}
