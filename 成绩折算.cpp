#include <iostream>
using namespace std;
int main(){
    cout<<"欢迎运行本程序 本程序由LF011制作cloudline studio 联系方式ghzx1704@hotmail.com 祝各位初中同学考试顺利 中考取得好成绩"<<endl;
    cout<<"注意：本程序按照语文，数学，英语，体育以原始分计算，政治历史分别以50%折算，地理生物以30%折算，物理以90%折算，化学以60%折算，福建地区完全适用，请其他地区的小伙伴们仔细核对使用！！ "<<endl;
    cout<<"请输入语文成绩"<<endl;
    float c1;
    cin>>c1;
    cout<<"请输入数学成绩"<<endl;
    float c2;
    cin>>c2;
    cout<<"请输入英语成绩"<<endl;
    float c3;
    cin>>c3;
    cout<<"请输入政治成绩"<<endl;
    float c4;
    cin>>c4;
    cout<<"请输入历史成绩"<<endl;
    float c5;
    cin>>c5;
    cout<<"请输入地理成绩"<<endl;
    float c6;
    cin>>c6;
    cout<<"请输入生物成绩"<<endl;
    float c7;
    cin>>c7;
    cout<<"请输入物理成绩"<<endl;
    float c8;
    cin>>c8;
    cout<<"请输入化学成绩"<<endl;
    float c9;
    cin>>c9;
    cout<<"请输入体育成绩"<<endl;
    float c10;
    cin>>c10;
    cout<<"您的总分为"<<c1+c2+c3+c4*0.5+c5*0.5+c6*0.3+c7*0.3+c8*0.9+c9*0.6+c10<<"分"<<endl;
    system("pause");
    return 0;
}
