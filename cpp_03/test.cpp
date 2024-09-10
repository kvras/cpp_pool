#include <iostream>

class A
{
    public : 
        std::string text;
        A(){
            text = "A";
        };
        A(const std::string& str){
            std::cout << "A" << std::endl;
            text = str+"_A";
        };
};

class B : virtual public A
{
    public : 
        B(){
            text = "B";
        };
        B(const std::string& str){
            std::cout << "B" << std::endl;
            text = str+"_B";
        };
};

class C : virtual public A
{
    public : 
        C(){
            text = "C";
        };
       C(const std::string& str){
            std::cout << "C" << std::endl;
            text = str+"_C";
        };
};
// A --> B --> C
// A --> C --> B
class D : public C, public B
{

    public : 
        D():A(), B(), C(){};
        D(const std::string& str){};
        void print(void){
            std::cout << text << std::endl;
        }
};


int main(){
    D d("hehe");
    d.print();
    return 0;
}
