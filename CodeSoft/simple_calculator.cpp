#include<iostream>
using namespace std;
int main(){
    //simple airthmetic calculator
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"                           - SIMPLE CALCULATOR -                            "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"--------------------------------OPERATIONS-----------------------------------"<<endl;
    cout<<"(1) ADDITION"<<endl;
    cout<<"(2) SUBTRACTION"<<endl;
    cout<<"(3) MULTIPLICATION"<<endl;
    cout<<"(4) DIVISION"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    int input1,input2,op;
    cout<<"Enter First Element:"<<endl;
    cin>>input1;
    cout<<"Enter Second Element:"<<endl;
    cin>>input2;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"SELECT OPERATION"<<endl;
    cin>>op;
    cout<<"----------------------------------------------------------------------------"<<endl;
    if(op==1){
        cout<<"RESULT OF ADDITION: "<<input1+input2<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
    }
    else if (op==2)
    {
        cout<<"RESULT OF SUBTRACTION: "<<input1-input2<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
    }
    else if (op==3)
    {
        cout<<"RESULT OF MULTIPLICATION: "<<input1*input2<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;

    }
    else if(op==4){
         cout<<"RESULT OF DIVISION: "<<input1/input2<<endl;
         cout<<"----------------------------------------------------------------------------"<<endl;


    }
    else{
        cout<<"Choose Correct Option To Perform Operation";

    }
    return 0;
    
}