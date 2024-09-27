#include<bits/stdc++.h>
using namespace std;

class A{
public:
    A(){
        printf("I am Constructor\n");
    }

    void display(){
        cout<<"I am Display Method\n";
    }

    ~A(){
        cout<<"I am Destructor\n"; 
        //  The destructor is called when the object is deleted /the destructor will be called automatically when the program finishes.  
    }

};

int main(){
   
    A obj;
    
    obj.display();
    // cout<<"hello";
    

}