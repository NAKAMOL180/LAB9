#include <iostream>
using namespace std;

int main(){
    int age,heigh,property;
    cout << "Enter your age: ";
    cin >> age;
    if( age <= 20 ){
        cout << "Enter your height: ";
        cin >> heigh;
        if(heigh < 160 ){
            cout << "Your status = UNFRIEND";
        }else if(heigh < 175){
            cout << "YOur status = FRIEND";
        }else{
            cout << "Enter your property: ";
            cin >> property;
            if(property > 69000000){
                cout << "Your status = MARRIED";
            }else{
                cout << "Your status = ONE-NIGHT-STAND";
            }

        }
        
    
    }else if(age < 30){
        cout << "Enter your property: ";
        cin >> property;
        if(property > 10000000){
            cout << "Your status = BEST FRIEND";
            }else{
                cout << "Your status = UNFRIEND";
        }
        }else{
        cout << "Your status = UNFRIEND";
    }

    return 0;
}


