#include <iostream>
#include <string>

using namespace std;

void swap(string,string);
void swapAdd(string &s1, string &s2);
void swap(string *, string *);
int main() {
    string  str1("现在"),str2("过去");
    // swap(str1, str2);


    swap(&str1, &str2);
    cout<<"返回后：str1："<<str1<<",str2："<<str2 <<endl;

    /* cout<<"交换前地址：str1："<<&str1<<",str2："<<&str2 <<endl;
     swapAdd(str1,str2);
     cout<<"返回后地址：str1："<<&str1<<",str2："<<&str2 <<endl;*/
    return 0;
}
//使用类和结构的对象作为参数，均是传值方式
void swap(string s1,string s2){
    string tmp = s1;s1=s2,s2=tmp;
    cout<<"交换后1：str1："<<s1<<",str2："<<s2<<endl;
}


void swap(string *s1,string *s2){


    //函数采用指针传递的方式，传入的实参实际上是s1和s1的指针的副本，
    // 而且改变的是副本本身而非其间接引用，所以不会影响的指针所指向的值，即s1和s2本身上。
    /*  string *tmp = s1;
      s1=s2, s2=tmp;*/


    //    针传递的方式，传入的实参虽然也是a和b的指针的副本，但是改变的是副本的间接引用
    //无论是指针本身还是其副本，都指向相同的值，所以这个改变会反应到s1和s2本身上
    string tmp = *s1;
    *s1=*s2, *s2=tmp;

    cout<<"交换后：str1："<<*s1<<",str2："<<*s2<<endl;
}
//引用传递方式
void swapAdd(string &s1, string &s2){
    string *tmp = &s1;
    s1 = s2; s1 = *tmp;
    cout<<"交换后的值：str1："<<&s1<<",str2："<<&s2<<endl;
}
