#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
    string name;
public:
    Neko(string s){
        name = s;
    }
    void naku(){
        cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
    }
};

int main()
{
    cout<<"Please input neko's name"<<endl;
    string name;
    cin>>name;
    Neko dora(name);  //「ボス」というの名前を持ったdoraが生成される
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();
}
