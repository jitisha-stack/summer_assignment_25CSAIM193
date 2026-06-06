#include<iostream>
int main(){
    int start , end ;
    std::cout<<"Enter Starting Number : ";
    std::cin>>start;

    std::cout<<"Enter Ending Number : ";
    std::cin>>end;

    std::cout<<"Prime Number Between "<<start<<" and "<<end<<"are :"<<std::endl;

    for(int i = start ; i<= end ; i++){ //staring the loop b/w start and end number
        bool Isprime = true;

        if(i < 2) { //1 and 0 is not prime
            Isprime=false;
        }
        else {
        //staring another loop to check factors of each number in given range
        
            for(int j=2 ; j<=i/2 ; j++){ //check factors until i/2

                if(i % j == 0){
                    Isprime = false;
                    break;

                }
            }
        }

        if(Isprime){
            std::cout<< i <<" "; //print the prime numbers between given range
        }
    }

    return 0;
}