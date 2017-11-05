#include <iostream>
using namespace std;
int nb(int n){
    int factor =1;
    int tem = 0;
    int low, cur, high;
    
    while (n / factor)
        
    {
        
        low = n % factor;//当前数字的低位
        cur = n / factor % 10;//数字当前位置的数
        high = n / factor / 10;// 当前数字的最高位
        
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
    
    cout<<"n是几？"<<endl;;
    cin>>a;
    cout<<nb(a)<<endl;
}
