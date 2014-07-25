#include <iostream>
/**< getline() 输入一行字符串 */
using namespace std;

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    string str;
    int *p;
    *p = 100;               //不要这样赋值
    cout<<"Enter your name:\n";

    cin.getline(name,ArSize);
    cout<<"Enter you favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout<<"I have some delicious"<<dessert;
    cout<<"for you ,"<<name<<"\n";
    return 0;
}
