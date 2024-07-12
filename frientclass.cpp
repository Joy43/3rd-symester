#include<iostream>
using namespace std;
class ClassB;
class ClassA{
    private:
    int valueA;
public:
ClassA(int a):valueA(a){}
friend int add(ClassA,ClassB);
};

class ClassB{
    private:
    int valueB;
    public:
    ClassB(int b):valueB(b){}
    friend int add (ClassA,ClassB);
};
int add(ClassA a,ClassB b){
 return a.valueA + b.valueB;
}
int main(){
    
}