#include <iostream>
using namespace std;

int dec2bin(int x){ 
    int count = 1;
    int y = 1;
    int bin = 1;
    while(count*2<=x){ //finds max number of binary digits
        count=count*2;
        y++; //keeps track of how many digits there are in the binary number
    }
    int z = count;
    for(int k =1; k<y;k++){
        count = count/2;
        bin=bin*10+1; //starts every digit off as 1
        if(z+count >x){ //if the next number + total is more than x its 0
            bin= bin-1;
        }
        else{
            z=z+count;
        }
    }
    return bin;

}

int bin2dec(int x){
    int dec = x;
    int num = 0;
    int count = 1;
    int len = to_string(x).length(); //finds the len of binary
    for(int y = 0; y<len; y++){
        if(dec%2 !=0){ //if its a 1 add to the total
            num = num+count;
            
        }
        count = count*2; 
        dec = dec/10; //goes char by char 
    }
    return num;
}

int main(){
    int option;
    int x;
    cout<<"Decimal --> binary type 0,   binary --> decimal type 1"<<'\n';
    cin>>option;
    if(option==1){
        cout<<"Please enter the number: ";
        cin>>x;
        cout<<"The decimal equivalent of "<<x<<" is "<<bin2dec(x)<<'\n';  
    }
    else if (option==0){
        cout<<"Please enter the number: ";
        cin>>x;
        cout<<"The binary equivalent of "<<x<<" is "<<dec2bin(x)<<'\n';
    }
    else{
        cout<<"Please indicate a function using 0 or 1 only"<<'\n';
    }
    
}


//to compile it: g++ binary.cpp -o binary.out 
//to run it:  ./binary.out         