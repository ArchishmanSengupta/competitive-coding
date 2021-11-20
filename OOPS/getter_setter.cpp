#include<bits/stdc++.h>
using namespace std;

class student {
public:
    int age;
    int rollNumber;
    void display(){
        cout<<age<<" "<<rollNumber<< " ";
    }
    int getRollno(){
        return rollNumber;
    }
    void setRollNo(int a)
    {
        rollNumber=a;
    }
};
int main(){
    student s1;
    student s2,s3;
    s1.age=26;
    // s1.rollNumber=12;

    s1.display();
    s1.setRollNo(121);
    cout<<s1.getRollno();

}