#include <iostream>
#include <string>
using namespace std; 

int main(){
    bool calcMore = true; 
    while(calcMore){
    double curGrade;
    double deGrade;
    double fWeight;

    cout<<"This code finds the final grade you need for a desired grade!"<<endl;
    cout<<"Your current grade: ";
    cin>>curGrade;
    cout<<"Your desired grade: ";
    cin>>deGrade;
    cout<<"Your final weight: ";
    cin>>fWeight;
    cout<<"To get a " + to_string(deGrade) + " you need a %" + to_string((deGrade-(1-fWeight)*curGrade)/fWeight)<<endl;
    cin>> calcMore;
    }

}