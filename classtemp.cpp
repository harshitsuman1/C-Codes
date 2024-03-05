#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 = 5.2;  
    T num2 = 6.0;  
    void add()  
    {  
        std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<float> d;  
    d.add();  
    return 0;  
}  