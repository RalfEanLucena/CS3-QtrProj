#include<iostream>
using namespace std;

int N, M, key;

int main() {
	
	if(1<=N <= 1000, 1 <= M <= 1000){
	
	cout<<"Enter the number of players: ";

		int N;

		cin>>N;
		
		cout<<endl;


			int array[N], key,i;

 		for(int M=0;M<N;M++){
 	
 			cout<<"Enter a position of a player: ";
 
			 cin>>array[M];
 
 			}
 			cout << endl;


		 for(int a=0;a<N;a++){
 	
    		cout<<array[a]<< " ";
    		
 			}
 			cout<<endl;
 			cout<<endl;

 		cout<<"Enter a number in the players: ";
 
		 cin>>key;

   		for(i=0;i<N;i++){
   	
     		 if(key==array[i]){
      	
  		cout<<"The first impostor is found at position: "<<i<<endl;
  
  		break;
  
   		 }
    
		 }


		if(i == N){
	
			cout<<"There is no impostor Among us. ";

		}
		
	}

   return 0;
   
}
