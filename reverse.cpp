#include<iostream>
using namespace std;

int main(){
    int n ; int reversere_num = 0; int rem;
    cout<<"Enter the number : ";
    cin>>n; 
    while(n!=0){
        rem = n%10;
        reversere_num = reversere_num * 10 + rem;
        n = n / 10;

       

    }
    cout << "Reversed number is : " << reversere_num;

}